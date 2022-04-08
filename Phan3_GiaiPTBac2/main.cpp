#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout <<"Chuong trinh giai phuong trinh bac 2 ax^2 + bx +c =0";
	double a,b,c,delta,x1,x2;
	cout<<"Ban hay nhap a, b, c : ";
	cin >>a >>b>> c;
	cout<<endl;
	delta = pow(b,2)-4*a*c;
	if(delta<0){
		cout<<"Phuong trinh vo nghiem.";
		return -1;
	}
	if(delta==0){
		x1 = -b/(2*a);
		cout<<"Phuong trinh co nghiem kep x1=x2="<<x1;
		return 1;
	}
	x1 = (-b+sqrt(delta))/(2*a);
	x2 = (-b-sqrt(delta))/(2*a);
	cout<<"Phuong trinh co 2 nghiem x1="<<x1<<" , x2="<<x2;
	return 0;
}
