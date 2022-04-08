#include<iostream>
using namespace std;
class Insan {
	private:
		int tcNo;
	public:
		int boy;
		void setBoy(int);
		int getBoy();
		void setTcNo(int);
		int getTcNo();
		
};
void Insan::setBoy(int boy){
	this->boy = boy;
}
int Insan::getBoy(){
	return boy;
}
void Insan::setTcNo(int tcNo) {
	this->tcNo = tcNo;
}
int Insan::getTcNo() {
	return tcNo;
}


int main() {
	Insan melih;
	melih.boy = 180;
	
	Insan& ref = melih; //referans nesnesi atadým melih e esitledim. 
	cout << ref.boy <<endl;

	ref.boy = 170;
	cout << melih.boy << endl;

	cout << ref.getBoy() << endl;

	Insan bireyler[3];
	for (int i = 0; i < 3; i++) {
		bireyler[i].boy = (i + 1) * 10;
	}
	for (int i = 0; i < 3; i++) {
		cout << bireyler[i].boy << endl;
		cout << &bireyler[i] << endl;
	}
	cout << "****" << endl << ref.getTcNo() << endl;
	
	ref.setTcNo(1234567890);
	cout << ref.getTcNo() << endl;

	//uml siniflarinda - isareti uyenin private oldugunu
	//+ isareti ise uyenin public oldugunu gosterir.

	cout << "****************************************" << endl;
	


}