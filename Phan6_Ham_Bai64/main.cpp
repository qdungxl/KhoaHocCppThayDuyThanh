#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
double Tinh1Cum(int m){
	double mauso=0;
	double kq =0;
	for(int j =1;j<=m;j++){
		mauso+=j;
	}
	kq = 1/mauso;
	cout<<kq<<endl;
	return kq;
}
int main(int argc, char** argv) {
	cout<<"Tinh day S = 1 + 1/(1+2)+1/(1+2+3)+...";
	cout<<"Ban hay nhap so n: ";
	int n;
	cin>>n;
	double S = 0;
	for(int i=1;i<=n;i++){
		S= S + Tinh1Cum(i);
	}
	cout<<"Ket sua day S(n) = "<<S;
	return 0;
}

