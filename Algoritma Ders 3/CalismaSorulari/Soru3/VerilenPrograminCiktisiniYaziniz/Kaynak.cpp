#include <iostream>
using namespace std;
class A {
public:
	int x;
public:
	A(int _x);
	~A();
};
A::A(int _x)
{
	x = _x;
	cout << "A(int) " << x << endl;
}
A::~A() {
	cout << "~A() " << x << endl;
}
class B {
private: 
	A a;
public:
	B(A pa) : a(pa) {
		cout << "B(A) " << endl;
	}
	~B() {
		cout << "~B() " << endl;
	}
};

int main() {
	A a(7);
	B b(a);
	cout << a.x;
}

//CIKTI
/*
A(int) 7
B(A)
~A() 7
7~B()
~A() 7
~A() 7
*/