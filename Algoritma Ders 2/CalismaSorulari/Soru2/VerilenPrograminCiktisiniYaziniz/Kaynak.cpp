#include<iostream>
using namespace std;
class A {
	int f1();
public:
	int x;
	int y;
	int f2();
	void xAta(int x);
};
int A::f1() {
	return 2 * x * y;
}
int A::f2() {
	f1();
	return x * x + y * y;
}
void A::xAta(int _x) {
	x = _x;
}
int main() {
	A a[3];
	int x, y;
	cout << "x*x+2*x*y+y*y = ?" << endl;
	for (int i = 0; i < 3; i++) {
		a[i].x = i * 2 + 1;
		a[i].y = i + 2;
	}
	for (int i = 0; i < 3; i++) {
		x = a[i].x;
		y = a[i].y;
		cout << x << "*" << x << "+2*" << x << "*" << y << "+" << y << "*" << y << "=" << a[i].f2() << endl;
	}
	return 0;
}
//CIKTI:
/*
x*x+2*x*y+y*y = ?
1*1+2*1*2+2*2=5
3*3+2*3*3+3*3=18
5*5+2*5*4+4*4=41
*/