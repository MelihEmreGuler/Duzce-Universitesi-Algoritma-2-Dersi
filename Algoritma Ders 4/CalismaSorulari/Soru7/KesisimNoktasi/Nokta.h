#ifndef NOKTA_H
#define NOKTA_H
class Nokta {
private:
	float x;
	float y;
public:
	//Nokta() { x = 0; y = 0; }
	float xAl() { return x; }
	float yAl() { return y; }
	void setX(float x) { this->x = x; }
	void setY(float y) { this->y = y; }
};
#endif // !NOKTA_H
