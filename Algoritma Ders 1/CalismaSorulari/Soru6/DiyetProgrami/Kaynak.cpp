#include <iostream>
using namespace std;
int main() {
	double* list = new double();
	int n;
	cout << "Diyet programinizin suresini giriniz (hafta sayisi): ";
	cin >> n;
	list = new double[n];
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". hafta kilonuz: ";
		cin >> list[i];
	}
	cout << "Bu diyet programi ile toplam " << list[0] - list[n - 1] << " kilo kaybettiniz.";

}

//CIKTI
/*
Diyet programinizin suresini giriniz (hafta sayisi): 5
1. hafta kilonuz: 72.3
2. hafta kilonuz: 71.1
3. hafta kilonuz: 69.5
4. hafta kilonuz: 67.8
5. hafta kilonuz: 66.1
Bu diyet programi ile toplam 6.2 kilo kaybettiniz.
*/