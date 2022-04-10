#include <iostream>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void SapXepGiamDan(int *&p, int n);
void NhapMang(int *&a, int n);
void XuatMang(int *a, int n);
void swap(int *&pa,int *&pb);
int main(int argc, char** argv) {
	int *a;
	int n =10;
	
	NhapMang(a,n);
	cout<<"Mang sau khi nhap la:\n";
	XuatMang(a,n);
	cout<<"Mang sau khi sap xep la :\n";
	cout<<endl;
	SapXepGiamDan(a,n);
	XuatMang(a,n);
	return 0;
}
void NhapMang(int *&a, int n){
    srand(time(NULL));
	a = new int[n];	
	for(int i =0; i<n;i++){		
		*(a+i) = rand()%101;
	}
}
void XuatMang(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
void SapXepGiamDan(int *&p, int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(p+j)>*(p+i)) swap(*(p+j),*(p+i));
		}
	}
}
void swap(int *&pa,int *&pb){
	int temp = *pa;
	*pa =*pb;
	*pb = temp;
}
