#include <iostream>
using namespace std;
void oku(int[], int);
int main() {
	int mevcut, toplam = 0;
	int enYuksek = 0;
	int* notlar;
	cout << "Sinif mevcudunu giriniz: ";
	cin >> mevcut;
	notlar = new int[mevcut];
	oku(notlar, mevcut);

	for (int i = 0; i < mevcut; i++) {
		toplam += notlar[i];
		if (notlar[i] > enYuksek)
			enYuksek = notlar[i];
	}
	cout << "Sinif ortalamasi = " << toplam / mevcut << endl;
	cout << "En yuksek not = " << enYuksek << endl;
	delete[] notlar;
	return 0;
}
void oku(int notDizi[], int boyut) {
	cout << "Notlari giriniz:";
	for (int i = 0; i < boyut; i++)
		cin >> notDizi[i];
}