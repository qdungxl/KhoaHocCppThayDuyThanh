#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
double Tinh1Cum(int x, int n){
	double kq =0;
	int tuso = pow(x,n);
	int mauso = 0;
	for(int i=1;i<=n;i++){
		mauso = mauso+i;
	}
	kq = (double)tuso/mauso;
	cout<<kq<<endl;
	return kq;
}
int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh gia tri S(x,n) = x + x^n/(1+..+n)"<<endl;
	cout<<"Ban hay nhap gia tri x va n : ";
	int x=0;
	int n=0;
	cin>>x>>n;
	double S =0;
	for(int i =1;i<=n;i++){
		S= S+ Tinh1Cum(x,i);
	}
	cout<<"Ket qua  "<< S;
	return 0;
}
