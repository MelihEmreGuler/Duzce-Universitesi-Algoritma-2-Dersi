#include <iostream>
using namespace std;
class Ulke {
public:
	string baskent, uluslararasiPlaka, dil;
	int nufus, telefonKodu;
 
	
	Ulke(){}
	Ulke(string, string);
	Ulke(string);
	Ulke(int);
	Ulke(string, string, string);
};

Ulke::Ulke(string baskent, string uluslararasiPlaka)
{
	this->baskent = baskent; 
	this->uluslararasiPlaka = uluslararasiPlaka;
}
Ulke::Ulke(string baskent)
{
	this->baskent = baskent;
}
Ulke::Ulke(int nufus)
{
	this->nufus = nufus;
}
Ulke::Ulke(string baskent, string uluslararasiPlaka, string dil)
{
	this->baskent = baskent;
	this->uluslararasiPlaka = uluslararasiPlaka;
	this->dil = dil;
}
int main() {
	Ulke turkiye("Ankara", "TR");
	Ulke almanya;
	Ulke ingiltere("Londra");
	Ulke kosova(2000000);
	Ulke ispanya("Madrid", "E", "Ispanyolca");
	Ulke estonya(372);
}