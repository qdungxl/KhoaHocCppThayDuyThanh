#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh chu vi dien tich hinh tron"<<endl;
	double r;
	const double PI = 3.14;
	double ChuVi, DienTich;
	cout<<"Moi ban nhap ban kinh: " <<endl;
	cin>>r;
	ChuVi = 2*PI*r;
	DienTich = PI*r*r;
	cout<<"Chu vi = " <<ChuVi<<endl;
	cout<<"Dien tich = "<<DienTich<<endl;
	return 0;
}
