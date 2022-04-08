#include <iostream>
using namespace std;
class TelefonRehberi {
public:
	string* isimler;
	long* telefonlar;

	TelefonRehberi(string* isimler, long* telefonlar) :isimler(isimler), telefonlar(telefonlar) {}
	TelefonRehberi(TelefonRehberi& refNes);
	void yazdir();
};
TelefonRehberi::TelefonRehberi(TelefonRehberi& refNes)
{
	isimler = refNes.isimler;
	telefonlar = refNes.telefonlar;
}
void TelefonRehberi::yazdir()
{
	for (int i = 0; i < 6; i++) {
		cout << isimler[i] << " " << telefonlar[i] << endl;
	}
}

int main() {
	string isimler[] = { "Aydin Sener","Fatma Girik","Melih Guler",
		"Taha Furkan","Harun Unal", "Emir Harun"};
	long telefonlar[] = { 1111111,2222222,3333333,4444444,5555555,6666666 };
	TelefonRehberi r1(isimler, telefonlar);
	r1.yazdir();
	cout << endl;
	TelefonRehberi r2(r1);
	r2.yazdir();
}