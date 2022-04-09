#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void GiaiPhuongTrinhBacHai(int a, int b, int c);
int main(int argc, char** argv) {
	cout<<"Chuong trinh giai phuong trinh bac hai (dung function)."<<endl;
	cout<<"Phuong trinh ax^2+bx+c=0. ban hay nhap vao a, b, c: ";
	int a,b,c;
	cin>>a>>b>>c;
	GiaiPhuongTrinhBacHai(a,b,c);
	return 0;
}
void GiaiPhuongTrinhBacHai(int a, int b, int c){
	double delta, x1, x2;
	delta = b*b - 4*a*c;
	if(delta<0){
		cout<<"Phuong trinh vo nghiem";
	}
	else
	{
		if(delta==0){
		cout<<"Phuong trinh co nghiem kep x1=x2="<<(-b/(2*a));	
		}
		else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			cout<<"Phuong trinh co 2 nghiem phan biet x1="<<x1<<" va x2="<<x2;
		}
	}
	return;
}
