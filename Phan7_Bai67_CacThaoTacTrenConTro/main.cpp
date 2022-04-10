#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a = 20, b= 15;
	int *pa, *pb, temp;
	pa = &a;
	pb =&b;
	temp =*pa;
	*pa = *pb;
	*pb =temp;
	cout<<"a = "<< a<<endl;
	cout<<"b = "<< b<<endl;
	return 0;
}
//pa++ khi nay dia chi o nho cua con tron pa bi doi di(tang len) 1 don vi( 1 don vi o day la 2byte do la bien int)
//pa = pa -2 khi nay dia chi o nho cua con tron pa bi doi di(giam xuong) 2 don vi( 1 don vi o day la 2byte do la bien int)
