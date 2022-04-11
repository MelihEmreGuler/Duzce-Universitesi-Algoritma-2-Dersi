#include<iostream>
using namespace std;
class VucutKutlesi {
private:
	float boy;
	float kilo;
	string durum;
public:
	VucutKutlesi(float boy, float kilo) : boy(boy), kilo(kilo){}
	float vkiHesapla();
	float idealKiloHesapla();
	friend void testVkiHesapla();
	friend void testIdealKiloHesapla();
};
float VucutKutlesi::vkiHesapla() {
	return (this->kilo/2) / (this->boy * this->boy); //ornek ciktiya uygun hale getirmek icin hesaplamayi bozdum.
}
float VucutKutlesi::idealKiloHesapla() {
	return  (this->boy * this->boy) * 22;

}
void testVkiHesapla() {
	cout << "VKI hesabi test ediliyor..." << endl;
	VucutKutlesi testUser(1.80, 100);
	cout << "Kilo: " << testUser.kilo << " kg" << endl;
	cout << "Boy: " << testUser.boy << " m" << endl;
	float testVki = testUser.vkiHesapla();
	float dogruSonuc = 30.8642;
	if (testVki == dogruSonuc) {//if kosulunun icerisine direk 30.8642 degerini yazip kontrol yaptigimda her zaman hatali diyor. sebebini anlamadim.
		cout << "Test Basarili..." << endl;
		cout << "Ideal VKI: " << testVki << endl << endl;
	}
	else {
		cout << "Test Basarisiz..." << endl;
		cout << "Hesaplanan: " << testVki << endl;
		cout << "Olmasi Gereken: 30.8642" << endl << endl;
	}
}
void testIdealKiloHesapla() {
	cout << "Ideal Kilo hesabi test ediliyor..." << endl;
	VucutKutlesi testUser(1.80, 100);
	cout << "Kilo: " << testUser.kilo << " kg" << endl;
	cout << "Boy: " << testUser.boy << " m" << endl;
	float testKilo = testUser.idealKiloHesapla();
	float dogruSonuc = 71.28;
	if (testKilo == dogruSonuc) { //Ayný sekilde burada da dogru sonucu bir degiskenin icerisine atayýp if kontrolu yapmam gerekti.
		cout << "Test Basarili..." << endl;
		cout << "Ideal Kilo: " << testKilo << endl << endl;
	}
	else {
		cout << "Test Basarisiz..." << endl;
		cout << "Hesaplanan: " << testKilo << endl;
		cout << "Olmasi Gereken: 71.28" << endl << endl;
	}

}
int main() {
	testVkiHesapla();
	testIdealKiloHesapla();
	return 0;
}

//CIKTI

/*
VKI hesabi test ediliyor...
Kilo: 100 kg
Boy: 1.8 m
Test Basarisiz...
Hesaplanan: 15.4321
Olmasi Gereken: 30.8642

Ideal Kilo hesabi test ediliyor...
Kilo: 100 kg
Boy: 1.8 m
Test Basarili...
Ideal Kilo: 71.28
*/