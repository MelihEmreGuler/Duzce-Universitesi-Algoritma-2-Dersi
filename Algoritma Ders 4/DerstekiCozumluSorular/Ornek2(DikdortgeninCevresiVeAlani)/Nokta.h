#ifndef NOKTA_H
#define NOKTA_H
class Nokta
{
	int x, y;
public:
	Nokta(int x = 0, int y = 0) { this->x = x; this->y = y; } 
	void xAta(int x) { this->x = x; }
	void yAta(int y) { this->y = y; }
	float xAl() { return x; }
	float yAl() { return y; }
	friend class Dikdortgen;
};
#endif

