#include <iostream>
using namespace std;
int main() {
	int* list = new int();
	int n;
	cout << "Veri serisinin boyutunu giriniz: ";
	cin >> n;
	list = new int[n];
	cout << "Veri serisini giriniz: ";
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	int* sayac = new int[n];
	for (int i = 0; i < n; i++) {
		sayac[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (list[i] == list[j]) {
				sayac[i]++;
			}
		}
	}
	//en buyuk sayinin oldugu elemanin, dizideki indisi
	int eb;
	eb = 0; 
	for (int i = 1; i < n; i++) {
		if (eb < sayac[i])
			eb = i;
	}
	cout << "Mod: " << list[eb];
}
//CIKTI
/*
Veri serisinin boyutunu giriniz: 10
Veri serisini giriniz: 1 3 2 1 4 2 6 3 1 8
Mod: 1
*/