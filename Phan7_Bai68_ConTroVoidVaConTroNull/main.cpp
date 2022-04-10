#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a =5;
	float f = 5.5;
	int *pa = &a;
	float *pf =&f;
	void *p;
	p=&a;
	*(int*)p = 10; //phai ep ve kieu minh mong muon de gan gia tri.
	cout <<" a= "<<a <<endl;
	p=&f;
	*(float*)p = 30.5; //phai ep ve kieu minh mong muon de gan gia tri.
	cout <<" f= "<<f<<endl;
	//int *y;
	//cout<<"Gia tri cua o nho ma y quan ly = "<<y<<endl; //chuong trinh se sai, khong ho le.
	
	int *x = new int; //chuong trinh tu dong cap phat bo nho cho bien x.
	cout<<"Gia tri cua o nho ma x quan ly = "<<x<<endl;
	return 0; // chu y chuong trinh van chay nhung return != 0. Phai == 0 moi dung.
}
