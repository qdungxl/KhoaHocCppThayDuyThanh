#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void NhapMang(int **&M, int n);
void XuatMang(int **M, int n);
int **CongMaTran(int **M1,int **M2, int n);
int main(int argc, char** argv) {
	srand(time(NULL));
	int **M1;
	int **M2;
	int **M3;
	int n =5;
	NhapMang(M1,n);
	NhapMang(M2,n);
	cout<<"Mang 1:\n";
	XuatMang(M1,n);
	cout<<endl;
	cout<<"Mang 2:\n";
	XuatMang(M2,n);
	cout<<endl;
	M3 = CongMaTran(M1,M2,n);
	cout<<"Cong 2 mang M1 va M2:\n";
	XuatMang(M3,n);
	cout<<endl;
	return 0;
}
void NhapMang(int **&M, int n){
	
	M = new int*[n];
	for(int i =0; i<n;i++){
		*(M+i) = new int[n];
	}
	for(int i =0;i<n;i++){
		for(int j =0; j<n;j++){
			*(*(M+i)+j) = rand()%101;
		}
	}
}
void XuatMang(int **M, int n){
	for(int i =0; i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*(*(M+i)+j)<<" ";
		}
		cout<<endl;
 }
}
int **CongMaTran(int **M1,int **M2, int n){
	int **M3 = new int*[n];
	for (int i =0; i<n; i++){
		*(M3+i) = new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j =0; j<n;j++){
			*(*(M3+i)+j) =  *(*(M1+i)+j) + *(*(M2+i)+j);
		}
	}
	return M3;
}
