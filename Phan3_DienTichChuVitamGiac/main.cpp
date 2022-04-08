#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool KiemTraTamGiac(int a, int b, int c){
	if (a>+b+c||b>=a+c||c>=a+b) return false;
	return true;
}
int main(int argc, char** argv) {
	int a,b,c;
	int chuvi;
	double dientich, p;
	cout<<"Chuong trinh tinh chu vi, dien tich tam giac."<<endl;
	cout<<"Hay nhap ba canh a,b,c cua tam giac: ";
	cin >>a >>b>>c;
	if(KiemTraTamGiac(a,b,c)==false){
		cout<<"Ba canh vua nhap khong phai la 3 canh cua tam giac.";
	}
	else{
		chuvi = a + b +c;
		p = chuvi/2.0;
		dientich = sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"Chu vi = "<<chuvi<<endl;
		cout<<"Dien tich = "<<dientich<<endl;
	}
	return 0;
}

