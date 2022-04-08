#include <iostream>
using namespace std;
class KolaMakinesi {
private:
	double fiyat;
	int adet;
public:
	void ilkYukleme(double, double);
	void kolaVerme();
	void goster();
};

void KolaMakinesi::ilkYukleme(double fiyat = 2.5, double adet = 100) {
	this->fiyat = fiyat;
	this->adet = adet;
}
void KolaMakinesi::kolaVerme() {
	double fark, girilenPara;
	cout << "Kolanin Fiyati: " << fiyat << " lira" << endl;
	cout << "Odemeniz:";
	cin >> girilenPara;
	if (girilenPara >= fiyat && adet > 0) {
		cout << "Kolaniz veriliyor." << endl;
		adet--;
		fark = girilenPara - fiyat;
		if (fark > 0.0) {
			cout << "Para ustunuz: ";
			if (fark > 1.0)
				cout << fark << " lira" << endl;
			else
				cout << fark * 100 << " kurus" << endl;
		}
		else
			cout << "Para ustunuz bulunmamaktadir." << endl;
	}
	else
		cout << "eksik para girisi yapilmistir ya da kola adeti bitmistir" << endl;
}
void KolaMakinesi::goster() {
	cout << "Son durum:" << endl;
	cout << "	Kolanin fiyati: " << fiyat << " lira." << endl;
	cout << "	Kalan Kola sayisi: " << adet << endl;
}
int main() {
	KolaMakinesi makine1;
	makine1.ilkYukleme();
	makine1.kolaVerme();
	makine1.goster();
}