#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct SinhVien{
	int ma;
	char ten[255];
};
void NhapMang(SinhVien dsSV[], int siso);
void XuatMang(SinhVien dsSV[], int siso);
int main(int argc, char** argv) {
	SinhVien dsSV[3];
	NhapMang(dsSV,3);
	XuatMang(dsSV,3);
	return 0;
}
void NhapMang(SinhVien dsSV[], int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<"Nhap sinh vien thu "<< i+1<<endl;
		cout<<"Nhan ma: ";
		cin>>dsSV[i].ma;
		cout<<"Nhap ten: ";
		cin.ignore();
		gets(dsSV[i].ten);
	}
	cout<<endl;
}
void XuatMang(SinhVien dsSV[], int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<endl;
	}
}
