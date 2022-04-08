#include <iostream>
using namespace std;
int* degistir(int*, int);
int main () {
	int n, * d1;
	cout << "Dizinin Boyutunu giriniz:";
	cin >> n;
	d1 = new int(n);
	cout << "Dizinin elemanlarini giriniz: ";
	for (int i = 0; i < n; i++) {
		cin >> d1[i];
	}
	int* d2 = new int(n-2);
	d2 = degistir(d1, n);
	cout << "Dizinin ilk ve son elemansiz kopyasi: ";
	for (int i = 0; i < n - 2; i++) {
		cout << d2[i] << " ";
	}

}
int* degistir(int* d, int n)
{
	int* copy, s;
	s = n - 2;
	copy = new int(s);
	for (int i = 0; i < s; i++) {
		copy[i] = d[i + 1];
	}
	return copy;
}
//CIKTI
/*
Dizinin Boyutunu giriniz:5
Dizinin elemanlarini giriniz: 2 4 6 8 10
Dizinin ilk ve son elemansiz kopyasi: 4 6 8
*/