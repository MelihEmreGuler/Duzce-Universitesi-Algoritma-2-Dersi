#include <iostream>
using namespace std;



int main() {
//Gösterge (pointer) tanýmý ve new komutunu tek bir komut halinde de yazabiliriz.
	int* ptr1 = new int; 
	int* ptr2;//normal pointer tanimladigimizda icine bir degisken koymazsak ve sonrasinda pointerin gosterdigi yerin degerine herhangi bir sey atarsak hata verir.
	//int ptr2 = 5; HATALI

	//Dinamik bir deðiþkenin tanýmlanmasý sýrasýnda ilk atamasý da yapýlabilir.
	int* ptr3 = new int(5);

	//dinamik dizi olusturma:
	int* diz;
	diz = new int[5]; //5 tane tamsayi alani bellekten ayirildi;
	
	for (int i = 0; i < 5; i++) {
		cin >> diz[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << &diz[i] << endl;
		cout << diz[i] << endl;
	}
	cout << endl;
	//deger atamalari icin pointer arithmetic de kullanilabilir
	cout << *diz << endl << *(diz + 1) << endl << *(diz + 2) << endl << *(diz + 3);

	delete[] diz; //yaratilan dizinin tum tuttugu adresler bellege geri dondurulur.
	delete ptr1;
	delete ptr2;

	//delete komutu ile, tuttugu yer geri gonderilmis olan pointer sonradan tekran kullanilabilir. yeniden tanimlanmasina gerek yoktur
	
	ptr1 = new int; // tekrardan bir alan atadim

}