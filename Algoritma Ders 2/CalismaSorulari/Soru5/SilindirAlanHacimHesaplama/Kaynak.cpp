#include<iostream>
using namespace std;
double pi = 3.14159265;
class Silindir {
private:
	int yukseklik;
	int tabanYaricapi;
public:
	double yuzeyAlaniHesapla();
	double hacimHesapla();
	void setYukseklik(int);
	int getYukseklik();
	void setTabanYaricapi(int);
	int getTabanYaricapi();
};
double Silindir::yuzeyAlaniHesapla()
{
	return 2 * pi * tabanYaricapi * yukseklik + 2 * pi * pow(tabanYaricapi, 2);
}
double Silindir::hacimHesapla() {
	return pi * pow(tabanYaricapi, 2) * yukseklik;
}
void Silindir::setYukseklik(int yukseklik)
{
	this->yukseklik = yukseklik;
}
int Silindir::getYukseklik() {
	return yukseklik;
}
void Silindir::setTabanYaricapi(int tabanYaricapi) {
	this->tabanYaricapi = tabanYaricapi;
}
int Silindir::getTabanYaricapi() {
	return tabanYaricapi;
}

int main() {
	cout << "Silindirin yukseklik degerini giriniz:";
	Silindir silindir1;
	int y, r;
	cin >> y;
	silindir1.setYukseklik(y);
	cout << "Silindirin taban yaricapi degerini giriniz:";
	cin >> r;
	silindir1.setTabanYaricapi(r);
	cout << "Yukseklik (h):" << silindir1.getYukseklik() << endl;
	cout << "Taban Yaricapi (r):" << silindir1.getTabanYaricapi() << endl;
	cout << "----------------------" << endl;
	double A, H;
	A = silindir1.yuzeyAlaniHesapla();
	H = silindir1.hacimHesapla();
	cout << "Yuzey alani (A):" << A << endl;
	cout << "Hacim (H):" << H << endl;
}