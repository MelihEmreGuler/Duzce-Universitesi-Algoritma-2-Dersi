#include<iostream>
using namespace std;
class Polinom {
	int* katsayi;
	int derece;
public:
	Polinom(int);
	void katsayiAta();
	void yaz();
	friend void topla(Polinom&, Polinom&);
};
Polinom::Polinom(int derece)
{
	this->derece = derece;
	katsayi = new int[derece]; //dinamik bellek kullanarak bellekten gerekli sayida yer ayirdim.
}
void Polinom::katsayiAta()
{
	cout << "Katsayilari giriniz:" << endl;
	for (int i = derece; i > -1; i--) {
		cout << "Katsayi " << i << ":";
		cin >> katsayi[i];
	}
}
void Polinom::yaz()
{
	cout << "(";
	for (int i = derece; i > -1; i--) {
		if (katsayi[i] == 0)
			//karsayisi 0 olan elemanlari yazma.
			continue;
		else if (i > 1) {

			cout << katsayi[i] << "x" << i;
		}
		else if (i == 1) {
			//derecesi 1 olan elamanlarin derecelerini yazma
			cout << katsayi[i] << "x";
		}
		else if (i == 0) {
			//derecesi 0 olan elemanlarin sadece katsayisi gozuksun
			cout << katsayi[i];
		}

		if (i != 0)
			cout << "+";
	}
	cout << ")";
}
void topla(Polinom& polinomNesnesi1, Polinom& polinomNesnesi2)
{
	for (int i = polinomNesnesi1.derece; i > -1; i--) {
		polinomNesnesi1.katsayi[i] += polinomNesnesi2.katsayi[i];
	}
}
int main() {
	int d;
	cout << "polinomlarin derecesini giriniz:";
	cin >> d;
	Polinom p1(d), p2(d);
	p1.katsayiAta();
	p2.katsayiAta();
	p1.yaz();
	cout << " + ";
	p2.yaz();

	cout << " = ";
	topla(p1, p2);
	p1.yaz();
	return 0;
}
//CIKTI
/*
polinomlarin derecesini giriniz:3
Katsayilari giriniz:
Katsayi 3:2
Katsayi 2:0
Katsayi 1:4
Katsayi 0:2
Katsayilari giriniz:
Katsayi 3:1
Katsayi 2:2
Katsayi 1:2
Katsayi 0:1
(2x3+4x+2) + (1x3+2x2+2x+1) = (3x3+2x2+6x+3)
*/
