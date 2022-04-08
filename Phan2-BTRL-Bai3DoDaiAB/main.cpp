#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Nhap vao to do diem A(x,y) :"<<endl;
	int Ax, Ay;
	cin>>Ax>>Ay;
	cout <<"Nhap toa do diem B(x,y) : "<<endl;
	int Bx,By;
	cin>>Bx>>By;
	double AB = sqrt(pow(Bx-Ax,2)+pow(By-Ay,2));
	cout <<"Do dai AB = "<< AB;
	return 0;
}
