#include <iostream>
using namespace std;
int* diziKopyasi(int*, int);
int main() {

	int* dizi1;
	int boyut;
	cout << "Dizinin boyutunu giriniz: ";
	cin >> boyut;
	dizi1 = new int[boyut];
	cout << "Dizinin elemanlarini giriniz: ";
	for (int i = 0; i < boyut; i++) {
		cin >> dizi1[i];
	}
	int* dizi2 = diziKopyasi(dizi1, boyut);
	cout << "Dizinin Kopyasi: ";
	for (int i = 0; i < boyut; i++)
		cout << dizi2[i] << " ";
	//delete[] dizi1;
	//delete[] dizi2; bunlari ekleyince program calistiktan sonra hata veriyor neden delete yapamiyoruz anlamadim
	return 0;
}
int* diziKopyasi(int* dizi, int boyut){
	int* kopyaDizi = new int(boyut);
	for (int i = 0; i < boyut; i++)
		kopyaDizi[i] = dizi[i];
	return kopyaDizi;
}

//CIKTI

/*
Dizinin boyutunu giriniz: 5
Dizinin elemanlarini giriniz: 2 4 6 8 10
Dizinin Kopyasi: 2 4 6 8 10
*/