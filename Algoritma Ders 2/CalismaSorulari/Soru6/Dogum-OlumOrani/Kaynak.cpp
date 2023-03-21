#include <iostream>
#include <string>
using namespace std;

// YerlesimBirimi sınıfı tanımlanır
class YerlesimBirimi {
public:
    string isim;
    int nufus, dogumSayisi, olenSayisi;
    
    // Yerleşim biriminin adını kullanıcıdan alır ve sınıfın 'isim' özelliğine kaydeder.
    void isimAta() {
        cout << "Yerlesim Biriminin ismini giriniz: ";
        cin >> isim;
    }

    // Yerleşim biriminin nüfusunu kullanıcıdan alır ve sınıfın 'nufus' özelliğine kaydeder.
    void nufusAta() {
        cout << "Nufusunu giriniz: ";
        cin >> nufus;
    }

    // Yerleşim birimindeki doğum sayısını kullanıcıdan alır ve sınıfın 'dogumSayisi' özelliğine kaydeder.
    void dogumAta() {
        cout << "Dogum sayisini giriniz: ";
        cin >> dogumSayisi;
    }

    // Yerleşim birimindeki ölüm sayısını kullanıcıdan alır ve sınıfın 'olenSayisi' özelliğine kaydeder.
    void olumAta() {
        cout << "Olum sayisini giriniz: ";
        cin >> olenSayisi;
    }

    // Yerleşim birimindeki doğum oranını hesaplar ve ekrana yazdırır.
    void dogumOraniBul() {
        double dogumOrani = double(dogumSayisi) / nufus;
        cout << isim << " --- Dogum Orani: " << dogumOrani << endl;
    }

    // Yerleşim birimindeki ölüm oranını hesaplar ve ekrana yazdırır.
    void olumOraniBul() {
        double olumOrani = double(olenSayisi) / nufus;
        cout << isim << " --- Olum Orani: " << olumOrani << endl;
    }
};

int main() {
    // İki YerlesimBirimi nesnesi oluşturulur.
    YerlesimBirimi yer1, yer2;

    // İlk yerleşim birimi için kullanıcıdan gerekli bilgiler istenir.
    cout << "1. Yerlesim Birimi" << endl;
    yer1.isimAta();
    yer1.nufusAta();
    yer1.dogumAta();
    yer1.olumAta();

    // İkinci yerleşim birimi için kullanıcıdan gerekli bilgiler istenir.
    cout << endl << "2. Yerlesim Birimi" << endl;
    yer2.isimAta();
    yer2.nufusAta();
    yer2.dogum

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
