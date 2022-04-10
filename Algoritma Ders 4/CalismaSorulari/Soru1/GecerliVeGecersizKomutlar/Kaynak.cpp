#include <iostream>
using namespace std;
class A {
	int x;
	const int y;
public:
	A(int _y) : y(_y){} //const bir sinif uyesine method uzerinde atama yapmak istersek bu kisayolla yapmaliyiz.
	int yAl() const;
	int xAl() const;
	void xAta(int x);
};
int A::xAl() const
{
	return 0; // x++;
}
void A::xAta(int _x)
{
	const int x = _x;
}
int A::yAl() const
{
	return y;
}
//yAta diye bir fonksiyon yok 
int main() {
}
//a. GECERSÝZ. x degistirilemez cunku const fonksiyon uzerinden erisiliyor.
//b. GECERLÝ. Prototipteki parametrenin ismiyle tanimdaki parametrenin ismi farkli olsa bile calisiyor bir hata vermiyor.
//c. GECERLÝ. baslatilmis(Ýlk deger atamasi constructor tarafindan yapilmis) bir degisken oldugu icin y return edilebilir 
//d. GECERSÝZ. yAata seklinde bir uye fonksiyon prototipi bulunmamaktadir.