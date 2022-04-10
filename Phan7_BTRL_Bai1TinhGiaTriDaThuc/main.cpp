#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void TaoMang(int *&a, int n){
	a = new int[n];
	for(int i=0;i<=n;i++){
		*(a+i) = rand()%11;
	}
}
void XuatMang(int *a, int n){
	for(int i=0;i<=n;i++){
		cout<<*(a+i)<<"\t";
	}
}
int GiaTriDaThuc(int *a, int n, int x){
	int fx=0;
	for(int i=0;i<=n;i++){
		fx+=*(a+i)*pow(x,n-i);
	}
	return fx;
}
int main(int argc, char** argv) {
	srand(time(NULL));
	int n,x;
	int *a;
	cout<<"Nhap vao n:\n";
	cin>>n;
	cout<<"Nhap vao x:\n";
	cin>>x;
	TaoMang(a,n);
	XuatMang(a,n);
	cout<<"\nDa thuc qua la: "<<GiaTriDaThuc(a,n,x);
	return 0;
}
