#ifndef DOGRU_H
#define DOGRU_H
#include"Nokta.h"
class Dogru {
private:
	float m, n;
public:
	Dogru(float m, float n) { this->m = m, this->n = n; }
	float egim();
	Nokta kesisim(Dogru&);
};
#endif // !DOGRU_H
