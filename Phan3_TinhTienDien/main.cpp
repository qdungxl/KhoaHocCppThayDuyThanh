#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh tien dien."<<endl;
	int const DGTC = 600, DG1 = 700,DG2 = 900, DG3 = 1100; //don gia ung voi cac muc tieu thu dien.
	cout<<"Hay nhap luong dien nang tieu thu : ";
	int SoDien, TienDien;
	cin >> SoDien;
	if(SoDien<=100)
	{
		TienDien = SoDien*DGTC;
		cout<<"Tien dien trong thang la : " << TienDien;
		return 1;
	}
	if(SoDien>100&&SoDien<=150){
		TienDien = 100*DGTC +  (SoDien-100)*DG1;
		cout<<"Tien dien trong thang la : " << TienDien;
		return 2;
	}
	if(SoDien>150&&SoDien<=200){
		TienDien = 100*DGTC +  50*DG1 + (SoDien-150)*DG2;
		cout<<"Tien dien trong thang la : " << TienDien;
		return 3;
	}
	TienDien = 100*DGTC +  50*(DG1+DG2) + (SoDien-200)*DG3;
	cout<<"Tien dien trong thang la : " << TienDien;
	return 0;
}
