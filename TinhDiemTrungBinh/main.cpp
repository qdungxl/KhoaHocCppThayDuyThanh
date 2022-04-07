#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double Toan, Ly, Hoa, TrungBinh;
	cout << "Hay nhap diem Toan : ";
	cin>>Toan;
	cout<<"Hay nhap diem Ly : ";
	cin>> Ly;
	cout<<"Hay nhap diem Hoa : ";
	cin>>Hoa;
	TrungBinh = (Toan+Ly+Hoa)/3;
	cout<<"Diem trung binh 3 mon  = " << setprecision(3)<< TrungBinh <<endl;
	return 0;
}
