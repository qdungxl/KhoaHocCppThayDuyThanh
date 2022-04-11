#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct SinhVien
{
	int ma;
	char ten[255];
};
int main(int argc, char** argv) {
	SinhVien teo;
	teo.ma = 113;
	strcpy(teo.ten,"teo");
	cout<<"Thong tin cua teo: ";
	cout<<teo.ma<<" - "<<teo.ten<<endl;
	SinhVien *pty = new SinhVien;
	pty->ma = 114;
	strcpy(pty->ten,"ty");
	cout<<"Thong tin cua ty: "<<endl;
	cout<<pty->ma<<"\t"<<pty->ten<<endl;
	
	SinhVien *pteo = new SinhVien;
	pteo = &teo;
	cout<<"Thong tin cua con tro pteo:"<<endl;
	cout<<pteo->ma<<" - "<<pteo->ten<<endl;
	
	strcpy(pteo->ten,"pteo");
	cout<<"Ten cua teo: "<<teo.ten;
	
	return 0;
}
