#include<iostream>
using namespace std;

class Dikdortgen {
public:
	int e, b;
	//yapici fonksiyonlarin dondurme tipi yoktur
	Dikdortgen();
	Dikdortgen(int, int); // eger parametresiz sadece nesne ismi ile tanimlama yapmak isyiyorsak
};						  //ici bos bir constructor tanimlamaliyiz (Dikdortgen() {};)(ici bos constructor visual studio da hataya sebep olmaktadýr.)
//Dikdortgen::Dikdortgen(){}
Dikdortgen::Dikdortgen(int e = 0, int b = 0)
{
	this->e = e; 
	this->b = b;
}
Dikdortgen::Dikdortgen()
{
}

// Bir sýnýfýn sabit, referans ve nesne üyelerine sadece ilk atama ile deðer verilebilir
class Dikdortgen2 {
public:
	int e, b;
	Dikdortgen2() {};
	Dikdortgen2(int, int);
};
//Dikdortgen::Dikdortgen(){}
Dikdortgen2::Dikdortgen2(int e = 0, int b = 0) : e(e), b(b) {} // uyelere ilk atama yontemi
															   // birinci e class degiskeni olan e ikinci e lokal(parametre) olan e
class A {
	
public:
	int no;
	A();
	A(A&parametre);
};
A::A()
{
	no = 0;
	cout << "Varsayilan yapici" << endl;
}
A::A(A& parametre)
{
	no = parametre.no;
	cout << "Kopya yapici fonksiyon" << endl;
}
class Bir {
	
public: 
	int x;
	float y;
	Bir() {}
	Bir(int x, float y) : x(x), y(y) {};
};
Bir fon() {
	return Bir(3, 6.9);
}
/*
– Yýkýcýfonksiyon ismi ~ iþareti ile baþlar ve sýnýfla ayný ismitaþýr
– Yýkýcý fonksiyonlara yükleme yapýlmaz
– Parametreleri ve döndürme tipleriyoktur
– Otomatik olarak çaðýrýlýrlar

*/
class Eleman {
	
public:
	int no;
	Eleman(int = 0); //Yapici fonksiyon prototipi.
	~Eleman(); //Yikici Fonksiyon prototipi
};
Eleman::Eleman(int no)
{
	this->no = no;
	cout << "Yapici Fonksiyon" << endl;
}
Eleman::~Eleman()
{
	cout << "Yikici fonksiyon" << endl;
	cout << "No: " << no << endl;
}

int main() {
	Dikdortgen d1(3, 5);
	Dikdortgen d2(3);
	//Dikdortgen d3; (Ders icerigine gore hatasiz ama visual studio da hatalý)(visual studio da hatadan kurtulmak icin varsayilan constructoru kaldirmaliyiz)
	Dikdortgen d3(0);
	

	//constructorlar diledigimiz herhangi bir zamanda da cagirilabilirler.
	d3 = Dikdortgen(1, 2);
	
	A a1;
	A a2(a1); //kopya yapici cagirilir
	A a3 = a2; //kopya yapici cagirilir (cok ilginc basit bir deger atama islemi referans parametreli constructor sayesinde gerceklesiyor)
	cout << a1.no << a2.no << a3.no <<endl;

	Bir n1(1, 2.5);
	Bir n2; // = n1;
	n2 = n1;
	cout << n2.x << " " << n2.y << endl; 
	Bir nsn;
	nsn = fon(); //fon() ' un dondurdugu nesne nsn'e atanir.

	
	Eleman kisi1(123), kisi2; // son olusturulan nesnenin destructor u ilk calisir(yigin yapisi gecerlidir.)

	return 0;
}