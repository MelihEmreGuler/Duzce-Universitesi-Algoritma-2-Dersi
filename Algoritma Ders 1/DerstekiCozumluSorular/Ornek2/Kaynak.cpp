#include <iostream>
using namespace std;
bool pointerKontrol1(int*, int*);
bool pointerKontrol2(int*, int*);
int main() {
	int* ptr1 = new int, * ptr2 = new int;
	//ptr1 = ptr2;
	cout << pointerKontrol1(ptr1, ptr2) << endl;
	cout << pointerKontrol2(ptr1, ptr2) << endl; //pointere bir deger isart ettirmedigimizde kendi kendine ikisine de ayni degeri gostertiyor.
}
bool pointerKontrol1(int* ptr1, int* ptr2)
{
	if (ptr1 == ptr2)
		return 1;
	else
		return 0;
}
bool pointerKontrol2(int* ptr1, int* ptr2)
{
	if (*ptr1 == *ptr2)
		return 1;
	else
		return 0;
}