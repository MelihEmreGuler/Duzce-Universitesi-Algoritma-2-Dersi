#include <iostream>
using namespace std;
int main() {
	int a = 29;
	int b = 25;
	int* x;
	int* y; 
	x = &a; //*x = 25
	y = &b; //*y = 29
	*x = *y + 3; //*x = 28
	*y = *x + 2; //*y = 30
	cout << "x:" << x << endl; //pointerin icindeki adres
	cout << "*x:" << *x << endl; //degeri
	cout << "&x:" << &x << endl; //pointerin kendisinin bellekte bulundugu adres
	cout << "y:" << y << endl; //pointerin icindeki adres
	cout << "*y:" << *y << endl; //pointerin degeri
	cout << "&y:" << &y << endl; //pointerin kendisinin bellekte bulundugu adres
	return 0;
}