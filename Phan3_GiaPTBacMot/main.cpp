#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c,x;
	cout<<"Chuong trinh giai phuogn trinh bac mot ax + b = 0 . "<<endl;
	cout<< "hay nhap a, b : ";
	cin >>a>>b;
	cout<<endl;
	if(a==0)
	{
		cout<<"Phuong trinh vo nghiem.";
		return 1;
	}
	if(b==0){
		cout<<"Phuong trinh vo so nghiem.";
		return -1;
	}
	x = -b/a;
	cout << "Phuong trinh co nghiem x="<<x;
	return 0;
}
