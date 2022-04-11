#include <iostream>
#include "Kalem.h"
using namespace std;

int main() {
// her musterinin 10 kalem mal alacagi varsayiliyor
	Kalem* Urunler = new Kalem[10];
	for (int i = 0; i < 10; i++) {
		cout << "Kalemin ismini giriniz: ";
		cin >> Urunler[i].isim;
		cout << "Kalemin fiyatini giriniz: ";
		cin >> Urunler[i].fiyat;
		cout << "Kalemin adetini giriniz: ";
		cin >> Urunler[i].adet;
	}
	for (int i = 0; i < 10; i++) {
		Urunler[0].toplam += Urunler[i].fiyat * Urunler[i].adet;
	}
	cout << endl << "Toplam tutar: " << Urunler[0].toplam << " lira";
}
//CIKTI
/*
Kalemin fiyatini giriniz: 10.3
Kalemin adetini giriniz: 4
Kalemin ismini giriniz: as
Kalemin fiyatini giriniz: 3.14
Kalemin adetini giriniz: 1
Kalemin ismini giriniz: das
Kalemin fiyatini giriniz: 4.23
Kalemin adetini giriniz: 2
Kalemin ismini giriniz: dfs
Kalemin fiyatini giriniz: 21
Kalemin adetini giriniz: 1
Kalemin ismini giriniz: asdfgh
Kalemin fiyatini giriniz: 1.54
Kalemin adetini giriniz: 5
Kalemin ismini giriniz: fsad
Kalemin fiyatini giriniz: 2.42
Kalemin adetini giriniz: 5
Kalemin ismini giriniz: qwe
Kalemin fiyatini giriniz: 3.41
Kalemin adetini giriniz: 2
Kalemin ismini giriniz: rte
Kalemin fiyatini giriniz: 5
Kalemin adetini giriniz: 1

Toplam tutar: 144.248 lira
*/



//Evet 10 kez urun girdim
