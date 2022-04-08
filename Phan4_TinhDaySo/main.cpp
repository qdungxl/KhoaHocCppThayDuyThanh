#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh day so S(x,n)"<<endl;
	cout<<"Hay nhap x va n : ";
	int x,n;
	double S = 0;
	cin>>x>>n;
	double mauso = 1;
	for(int i =1; i<=n;i++){
		double tuso = pow(x,i);
		mauso = mauso*i;
		S = S + tuso/mauso; 
	}
	cout<<"S = "<< S;
	return 0;
}
