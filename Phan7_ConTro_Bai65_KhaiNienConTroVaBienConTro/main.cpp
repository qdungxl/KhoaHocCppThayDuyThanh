#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int *p;
	p = new int; // cap phat bo nho cho con tro p.
	*p = 100; // gan gia tri bang 100 tai o nho ma p dang tro toi.
	cout<<"Dia chi tai con tro p = "<<p<<endl;
	cout<<"Gia tri tai dia chi ma on tro p dang tro toi = "<<*p;
	delete p; //thu hoi bo nho cua con tro.
	//bi loi Memory leak neu khong thu hoi bo nho.
	
	return 0;
}
