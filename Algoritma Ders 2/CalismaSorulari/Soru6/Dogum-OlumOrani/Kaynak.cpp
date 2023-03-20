//HELAL ETMİYEM
#include<iostream>
using namespace std;
class YerlesimBirimi {
public:
	string isim;
	int nufus, dogumSayisi, olenSayisi;

	void isimAta(), nufusAta(), dogumAta(), olumAta(), 
		dogumOraniBul(), olumOraniBul(); 
};
void YerlesimBirimi::isimAta()
{
	string isim;
	cout << "Yerlesim Biriminin ismini giriniz: ";
	cin >> isim;
	this->isim = isim;
}
void YerlesimBirimi::nufusAta()
{
	int nufus;
	cout << "	Nufusunu giriniz: ";
	cin >> nufus;
	this->nufus = nufus;
}
void YerlesimBirimi::dogumAta()
{
	int dogumSayisi;
	cout << "	Dogum sayisini giriniz: ";
	cin >> dogumSayisi;
	this->dogumSayisi = dogumSayisi;
}
void YerlesimBirimi::olumAta()
{
	int olenSayisi;
	cout << "	Olum sayisini giriniz: ";
	cin >> olenSayisi;
	this->olenSayisi = olenSayisi;
}
void YerlesimBirimi::dogumOraniBul()
{
	double dogumOrani = 0;
	dogumOrani = double(dogumSayisi) / nufus;
	cout << "		" << isim << " --- Dogum Orani:" << dogumOrani;
	cout << endl;
}
void YerlesimBirimi::olumOraniBul()
{
	double olumOrani;
	olumOrani = double(olenSayisi) / nufus;
	cout <<"		"<< isim << " --- Olum Orani:" << olumOrani;
	cout << endl;
}

int main() {
	YerlesimBirimi yer[2];
	for (int i = 0; i < 2; i++) {
		yer[i].isimAta();
		yer[i].nufusAta();
		yer[i].dogumAta();
		yer[i].olumAta();
		yer[i].dogumOraniBul();
		yer[i].olumOraniBul();
	}
	
}
//CİKTİ:
/*
Yerlesim Biriminin ismini giriniz: Ankara
	Nufusunu giriniz: 4890893
	Dogum sayisini giriniz: 67660
	Olum sayisini giriniz: 20634
		Ankara --- Dogum Orani:0.0138339
		Ankara --- Olum Orani:0.00421886
Yerlesim Biriminin ismini giriniz: Turkiye
	Nufusunu giriniz: 74724269
	Dogum sayisini giriniz: 1238970
	Olum sayisini giriniz: 365190
		Turkiye --- Dogum Orani:0.0165806
		Turkiye --- Olum Orani:0.00488717
*/
