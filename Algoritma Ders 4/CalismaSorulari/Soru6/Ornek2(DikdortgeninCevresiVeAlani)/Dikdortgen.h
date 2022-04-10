#include "Nokta.h"
using namespace std;
class Dikdortgen
{
	Nokta a, b;
public:
	Dikdortgen(Nokta a, Nokta b) { this->a = a; this->b = b; } // nokta sinifinin varsayilan olusturucu yok hatasi verdigi icin 
														   // nokta sinifinin constructor'unda x ve y ye varsayilan 0 degerini atadaim.
	int alan();
	int cevre();
};

