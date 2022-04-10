#include<iostream>
using namespace std;
class X {
	static int one;
	int number;
public:
	X(int = 0);
	X& change(int);
	void print();
};
int X::one = 3;
X::X(int a) {
	one += 3;
	number = a;
}
void X::print() {
	cout << one << "     " /* benim compilerimde setw tanimli degil ama parametresi kadar karakter boþluk býrakma fonksiyonudur zaten */ << number << endl;
}
X& X::change(int b) {
	number = b; // * konulmasi hatalidir.
	return *this;
}
int main() {
	X obj1(3);
	obj1.print();
	obj1.change(4).change(5).print();
	X obj2;
	obj2.print();
	return 0;
}

//CIKTI

/*
6     3
6     5
9     0
*/

//one = 3(baslatilma degeri), 6(obj1 olusturuldu), 9(obj2 olusturuldu)