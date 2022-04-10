#include "a.h"
#include <iostream>
using namespace std;
/*
� �ki s�n�f�n aras�nda d�rt tip ili�ki olabilir.
�S�n�flar birbirlerinden ba��ms�z tan�mlanabilir,
�S�n�flar bile�im yoluyla ba�lanabilirler,
�S�n�flar arkada� (friend) olarak tan�mlanabilir,
�S�n�flar miras yoluyla ili�kilendirilebilir.

Arkada� fonksiyonlar
� S�n�f�n �yesi olmamas�na ra�men o s�n�f�n private �yelerine eri�me hakk�na sahip fonksiyonlard�r
� friend anahtar kelimesi ile fonksiyon prototipinde belirtilir

Arkadas siniflar
� Bir s�n�f ba�ka bir s�n�f�n arkada�� olarak tan�mlan�rsa t�m private �yelerine
eri�ebilme hakk�na sahip olur.
*/

class Dene {
	int no;
public:
	Dene (int n = 0):no(n){}
	friend void yaz(Dene&); // Arkadas fonksiyon prototipi
};
void yaz(Dene& x) {         // Arkadas fonksiyon tanimi
	cout << "numara = " << x.no << endl;
}
// ----------------------------------------------------
class B;
class A {
	int x;
public:
	A(int  _x) :x(_x) {}
	friend class B;         // Arkadas sinif tanimi
};
class B {
	int y;
public:
	void fon(A& nsn);
};
void B::fon(A& nsn) {
	y = nsn.x;
	cout << "y=" << y << endl;
}
// ----------------------------------------------------
double PI = 3.14;
class Daire {
	int r;
public: 
	Daire(int _r):r(_r){}
	int rAl() const {
		return r;
	}
	void rAta(int _r) {
		r = _r;
	}
	float alan() const;
	float alan();
};
float Daire::alan() const{ //Dairenin alanini hesaplayan sabit fonksiyon
	cout << "Sabit alan() uye fonksiyonu" << endl;
	return PI * r * r;
}
float Daire::alan() { //Daire alanini hesaplayan sabit olmayan fonksiyon
	cout << "Sabit olmayan alan() uye fonksiyonu" << endl;
	return PI * r * r;
}
// ----------------------------------------------------
class Ders {
	string ad;
	int ogrSayi;
	int* notlar;
public:
	Ders();
	~Ders() { delete[]notlar; }
	void oku();
	void yaz();
};
Ders::Ders() {
	cout << "Ders adini ve ogrenci sayisini giriniz:";
	cin >> ad >> ogrSayi;
	notlar = new int[ogrSayi];
	cout << "Ogrenci notlarini giriniz:";
	for (int i = 0; i < ogrSayi; i++)
		cin >> notlar[i];
	cout << endl;
}
void Ders::yaz() {
	cout << "Ders: " << ad << endl;
	cout << "Ogrenci Notlari:";
	for (int i = 0; i < ogrSayi; i++)
		cout << notlar[i] << " ";
	cout << endl;
}

// ----------------------------------------------------

/*
Sistemde �nceden tan�mlanm�� this g�stergesi
her zaman fonksiyonu �a��ran nesnenin kendisini
g�sterir.
*/

/*
� this g�stergesi kullanarak Fonksiyon
Zincirleme (�ng.Function chaining) yap�labilir.
� Fonksiyon zincirleme, bir fonksiyonun
d�nd�rd��� nesneyi kullanarak ba�ka bir
fonksiyon �a��rmak anlam�na gelir.
*/


class Sayi {
	int n;
public:
	Sayi(int _n=0):n(_n){}
	Sayi& ekle(int);
	void yaz();
};
Sayi& Sayi::ekle(int x) {
	n += x;
	return *this; //icinde bulundugumuz nesneyi dondurur.
}
void Sayi::yaz() {
	cout << "n= " << n << endl;
}

// ----------------------------------------------------

/*
� �ng. Static classmember
� Bir s�n�f tipindeki t�m nesnelerin ortak
kullanabildikleri �yelerdir
� static anahtar kelimesi ile tan�mlan�r.
*/

class Bir {
public:
	static int sayi; //sinif ici ilk deger atama yapamiyoruz.
	Bir() {
		sayi++;
	}
};
int Bir::sayi = 0; //statik uyenin ilk deger atamasi.

int main() {
	Dene test1(7), test2(12);
	yaz(test1);             // Arkadas fonksiyon cagirimi
	yaz(test2);             // friend keyword sayesinde private degiskenlere erisebildik.
	
	cout << "------------------------------" << endl;

	A bir(10);
	B iki;
	iki.fon(bir);

	cout << "------------------------------" << endl;

	Daire d(3);
	const Daire d2(3);

	float* alan = new float;
	*alan = d.alan();
	cout << "Alan:" << *alan << endl;
	*alan = d2.alan();
	cout << "Alan:" << *alan << endl;

	cout << "------------------------------" << endl;

	Ders fizik, kimya;
	fizik.yaz();
	kimya.yaz();
	fizik.~Ders(); //nedense bu delete methodlari yuzunden program calistirilinca kasiyor.
	kimya.~Ders();

	cout << "------------------------------" << endl;

	Sayi s(1);
	s.ekle(2).ekle(3).yaz(); //s nesnesinin n uyesine 2 ve 3 eklenir, yazdirilir.

	cout << "------------------------------" << endl;

	Bir n1, n2, n3;
	cout << "Nesnelerin sayisi: " << n1.sayi << endl;

	cout << "------------------------------" << endl;

	a nsn;
	nsn.i = 5;
	nsn.yaz();
	return 0;

}