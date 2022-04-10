#include<iostream>
#include "Nokta.h"
#include "Dikdortgen.h"
using namespace std;
int main() {
	int x, y;
	cout << "a noktasi (x,y):";
	cin >> x >> y;
	Nokta a(x, y);
	cout << "b noktasi (x,y):";
	cin >> x >> y;
	Nokta b(x, y);
	Dikdortgen d(a, b);
	cout << "Cevre:" << d.cevre() << endl;
	cout << "Alan:" << d.alan() << endl;
	return 0;
}

//CIKTI
/*
a noktasi (x,y): 4 5
b noktasi (x,y): 10 15
Cevre:32
Alan:60
*/
