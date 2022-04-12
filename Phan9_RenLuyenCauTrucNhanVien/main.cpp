#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct DiaChi
{
	char TenDuong[255];
	char TenQuan[150];
	char TinhThanh[150];
};
struct NhanVien
{
	int Ma;
	char Ten[255];
	int Tuoi;
	DiaChi CoQuan;
	DiaChi NhaRieng;
};
int main(int argc, char** argv) {
	NhanVien Teo;
	Teo.Ma = 1;
	strcpy(Teo.Ten,"Nguyen Teo");
	Teo.Tuoi = 23;
	strcpy(Teo.CoQuan.TenDuong,"Lac Long Quan");
	strcpy(Teo.CoQuan.TenQuan,"Quan 11");
	strcpy(Teo.CoQuan.TinhThanh,"TP.Ho Chi Minh");
	strcpy(Teo.NhaRieng.TenDuong,"Cach Mang Thang 8");
	strcpy(Teo.NhaRieng.TenQuan,"Quan 10");
	strcpy(Teo.NhaRieng.TinhThanh,"TP.Ho Chi Minh");
	cout<<"Thong tin cua teo:"<<endl;
	cout<<Teo.Ma<<" - "<<Teo.Ten<<" - "<<Teo.Tuoi<<" - " <<Teo.NhaRieng.TinhThanh<<", "<<Teo.NhaRieng.TenQuan<<", "<<Teo.NhaRieng.TenDuong<<endl;
	
	return 0;
}
