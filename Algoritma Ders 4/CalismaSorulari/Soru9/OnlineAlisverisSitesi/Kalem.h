#ifndef KALEM_H
#define KALEM_H
#include <iostream>
using namespace std;
class Kalem { //musterinin aldigi her kalem malin bilgilerini tutacak
public: // eger bu 3 uyeyi private yaparsam her birine erismek icin ayri ayri getter setter fonksiyonlarini tanimlamam lazim. Ugrasmiyorum public yaptim.
	string isim;
	float fiyat;
	int adet;

	Kalem(){}
	Kalem(string isim, float fiyat, int adet) { this->isim = isim, this->fiyat = fiyat, this->adet = adet; }
	static float toplam;
};
float Kalem::toplam = 0;
#endif // !KALEM_H

