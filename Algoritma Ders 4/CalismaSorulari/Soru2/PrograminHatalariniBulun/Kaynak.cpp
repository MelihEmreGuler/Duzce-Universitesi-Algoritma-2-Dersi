#include<iostream>
using namespace std;
class Test {
private:
	int deg1;
	const int deg2;
	int& deg3;
	void degistir() {
		cout << "merhaba";
	}
public:
	Test(int);
	int bir()const {
		cout << "hoscakal ";
		deg1* = 2; //HATA //deg1 sinif uyesi bir pointer degildir herhangi gosterdigi bir yer yoktur. 
	}
	int iki() {
		return deg1;
	}
};
Test::Test(int s) :deg2(s) {//HATA //referans degiskenlerinde prototipte ilk deger atamasi yapilamk zorudadir. (deg3 e yapilmamis.
	deg1 = s;
	deg3 = s; //HATA //referans degiskenine bu sekilde bir deger atanamaz
}

int main() {
	Test t(5);
	const Test z(10);
	t.deg1 = 8; //HATA // private bir degiskene class disarisindan erisilemez.
	int k = t.iki();
	t.degistir(); //HATA // private bir fonksiyona class disarisindan erisilemez
	cout << z.iki(); //Hata // sabit const bir nesne sadece const fonksiyonlari cagirabilir.
	return 0;
}