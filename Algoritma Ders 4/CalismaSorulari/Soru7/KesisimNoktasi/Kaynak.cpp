#include<iostream>
#include"Dogru.h"
#include"Nokta.h"
using namespace std;
float Dogru::egim() {
	return m;
}

Nokta Dogru :: kesisim(Dogru& dogru)
{
	Nokta nkt;
	float x = (dogru.n - n) / (m - dogru.m);
	float y = m * x + n;
	nkt.setX(x);
	nkt.setY(y);
	return nkt;
}

int main() {
	Dogru dogru1(2.0, 4.0);
	Dogru dogru2(-2.0, 2.0);
	cout << "Dogru-1 egim:" << dogru1.egim() << endl;
	cout << "Dogru-2 egim:" << dogru2.egim() << endl;
	Nokta k = dogru1.kesisim(dogru2);
	cout << "Kesisim (K) noktasi (x,y):" << k.xAl() << "," << k.yAl() << endl;
	return 0;

}
//CIKTI
/*
Dogru-1 egim:2
Dogru-2 egim:-2
Kesisim (K) noktasi (x,y):-0.5,3
*/