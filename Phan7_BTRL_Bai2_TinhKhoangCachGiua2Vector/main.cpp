#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void TaoMang(int *a, int n){
	for(int i=0;i<n;i++){
		*(a+i) = rand()%10;
	}
}
void XuatMang(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
double TinhKhoangCach(int *M1, int *M2, int n){
	double kc = 0;
	for(int i=0;i<n;i++){
		kc+=pow((*(M1+i)-*(M2+i)),2);
	}
	kc = sqrt(kc);
	return kc;
}
int main(int argc, char** argv) {
	srand(time(NULL));
	cout<<"Nhap vao n: ";
	int n;
	cin>>n;
	int *M1 = new int[n];
	int *M2 = new int[n];
	TaoMang(M1,n);
	TaoMang(M2,n);
	cout<<"Mang M1 : ";
	XuatMang(M1,n);
	cout<<endl;
	cout<<"Mang M1 : ";
	XuatMang(M2,n);
	cout<<endl;
	cout<<"Khoang cach cua 2 vector="<<TinhKhoangCach(M1,M2,n);
	return 0;
}
