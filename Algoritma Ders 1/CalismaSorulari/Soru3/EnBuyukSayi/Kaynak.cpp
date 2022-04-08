#include <iostream>
using namespace std;
void sayiOku( float*, int);
void yazdir(float*, int);
float maksimumHesapla(float*, int);
int main() {
	float* g;
	int n;
	float ortalama, max, min;
	cout << "Girmek istediginiz sayi adedini giriniz: ";
	cin >> n;
	g = new float[n];
	sayiOku(g, n);
	yazdir(g, n);
	cout << "En buyuk sayi:" << maksimumHesapla(g, n) << endl;
	delete[] g;
	return 0;
}
void sayiOku(float* g, int n)
{
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". sayi:";
		cin >> g[i];
	}
}
void yazdir(float* g, int n)
{
	for (int i = 0; i < n; i++) {
		cout << g[i] << endl;
	}
}
float maksimumHesapla(float* g, int n)
{
	float m = *g;
	for (int i = 0; i < n; i++) {
		if (g[i] > m) {
			m = g[i];
		}
	}
	return m;
}

//CIKTI

/*
Girmek istediginiz sayi adedini giriniz: 5
1. sayi:89.45
2. sayi:34.56
3. sayi:67.98
4. sayi:95.7
5. sayi:89.57
89.45
34.56
67.98
95.7
89.57
En buyuk sayi:95.7
*/