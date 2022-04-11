#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct DiaChi{
	char SoNha[25];
	char TenDuong[250];
	char Quan[25];
	char TinhThanh[25];
};
struct SinhVien{
	char MaSV[10];
	char TenSV[250];
	bool GioiTinh;
	DiaChi DiaChiNha;
}teo,ty;
int main(int argc, char** argv) {
	strcpy(teo.TenSV,"Nguyen Van Teo");
	teo.GioiTinh = true;
	strcpy(teo.MaSV,"SV113");
	cout<<"---------------"<<endl;
	cout<<teo.MaSV<<" - "<<teo.TenSV<<" - "<<(teo.GioiTinh==true?"Nam":"Nu")<<endl;
	
	SinhVien bin;
	strcpy(bin.TenSV,"Pham Bin");
	cout<<bin.TenSV<<endl;
	return 0;
}
