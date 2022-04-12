#include <iostream>
#include <fstream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct NhanVien
{
	int Ma;
	char Ten[50];
};
void LuuFile()
{
	NhanVien dsNV[3];
	
	dsNV[0].Ma = 1;
	strcpy(dsNV[0].Ten,"Teo");
	
	dsNV[1].Ma = 2;
	strcpy(dsNV[1].Ten,"Tung");
	
	dsNV[2].Ma = 3;
	strcpy(dsNV[2].Ten,"Ty");
	
	ofstream outfile("csdl.txt",ofstream::binary);
	outfile.write((char*)dsNV,sizeof(dsNV));
	outfile.close();
}
void XuatNhanVien(NhanVien dsNV[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<dsNV[i].Ma<<"\t"<<dsNV[i].Ten<<endl;
	}
}
void DocFile()
{
	ifstream infile("csdl.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size = infile.tellg();
	infile.seekg(0);
	int real = size/sizeof(NhanVien);
	NhanVien dsNV[real];
	infile.read((char*)dsNV,sizeof(dsNV));
	infile.close();
	XuatNhanVien(dsNV,real);
}
int main(int argc, char** argv) {
	DocFile();
	
	return 0;
}
