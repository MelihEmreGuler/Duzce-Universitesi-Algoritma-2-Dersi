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