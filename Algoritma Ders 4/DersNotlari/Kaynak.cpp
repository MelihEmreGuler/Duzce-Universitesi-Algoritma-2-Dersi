#include <iostream>
using namespace std;
/*
• Ýki sýnýfýn arasýnda dört tip iliþki olabilir.
–Sýnýflar birbirlerinden baðýmsýz tanýmlanabilir,
–Sýnýflar bileþim yoluyla baðlanabilirler,
–Sýnýflar arkadaþ (friend) olarak tanýmlanabilir,
–Sýnýflar miras yoluyla iliþkilendirilebilir.

Arkadaþ fonksiyonlar
• Sýnýfýn üyesi olmamasýna raðmen o sýnýfýn private üyelerine eriþme hakkýna sahip fonksiyonlardýr
• friend anahtar kelimesi ile fonksiyon prototipinde belirtilir

Arkadas siniflar
• Bir sýnýf baþka bir sýnýfýn arkadaþý olarak tanýmlanýrsa tüm private üyelerine
eriþebilme hakkýna sahip olur.
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
float PI = 3.14;
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
	return 0;

}