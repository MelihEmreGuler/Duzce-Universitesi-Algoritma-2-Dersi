#include <iostream>
using namespace std;
class Saat {
public:
	int saat, dakika;
	void basla(int, int);
	void arttir();
	void goster();
};
void Saat::basla(int s = 12, int d = 0) {
	saat = s; 
	dakika = d;
}
void Saat::arttir(){
	if (dakika < 59)
		dakika++;
	else {
		dakika = 0;
		if (saat < 23)
			saat++;
		else
			saat = 0;
	}
}
void Saat::goster() {
	if (saat == 0)
		cout << "00:";
	else
		cout << saat << ":";
	if (dakika == 0)
		cout << "00" << endl;
	else if (dakika < 10)
		cout << "0" << dakika << endl;
	else
		cout << dakika << endl;
}

int main() {
	Saat s;
	s.basla(14, 55);
	cout << "Saat: ";
	s.goster();
	cout << "10 dakika boyunca:" << endl;
	for (int i = 1; i <= 10; i++) {
		s.goster();
		s.arttir();
	}
	
}
//CİKTİ:
/*
Saat: 14:55
10 dakika boyunca:
14:55
14:56
14:57
14:58
14:59
15:00
15:01
15:02
15:03
15:04
*/