#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double CanhDoiDien;
	double ChieuCao;
	double DienTich;
	cout<<"Chuong trinh tinh chu vi dien tich tam giac"<< endl;
	cout<<"Ban hay nhap chieu dai canh doi dien : " << endl;
	cin>>CanhDoiDien;
	cout<<"Ban hay nhap vao chieu cao : "<<endl;
	cin>> ChieuCao;
	DienTich = 1.0/2*ChieuCao*CanhDoiDien;
	cout<<"Dien tich tam giac = " << DienTich <<endl;
	return 0;
}
