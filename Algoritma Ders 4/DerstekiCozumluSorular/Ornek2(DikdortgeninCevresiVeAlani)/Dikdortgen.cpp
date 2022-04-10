#include"Dikdortgen.h"
#include<iostream>
using namespace std;
int Dikdortgen::alan() {
	return abs(a.x - b.x) * abs(a.y - b.y);
}
int Dikdortgen::cevre() {
	return 2 * (abs(a.x - b.x) + abs(a.y - b.y));
}
