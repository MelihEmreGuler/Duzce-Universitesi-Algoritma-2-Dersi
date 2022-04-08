// x -> z
// z -> y
// y -> x
#include <iostream>
using namespace std;
void degistir(int*, int*, int*);
int main() {
	int x = 10, y = 30, z = 40;
	degistir(&x, &y, &z);
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	return 0;
}
void degistir(int* x, int* y, int* z) {
	int _x, _y, _z;
	_x = *x;
	_y = *y;
	_z = *z;
	*z = _x;
	*y = _z;
	*x = _y;
}
//CIKTI:
/*
30
40
10
*/