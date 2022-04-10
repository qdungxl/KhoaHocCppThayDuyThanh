#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a[]={4,5,6,7,8,9};
	cout<<"Gia tri cua mang a:"<<endl;
	for(int i =0; i< 6; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	int *p = a;
	for(int i =0; i<6;i++){
		cout<<*(p+i)<<"\t";
	}
	cout<<"\nThay doi gia tri cac phan tu trong mang dung con tro."<<endl;
	for(int i =0; i<6;i++){
		*(p+i)+=1;
		cout<<*(p+i)<<"\t";
	}
	return 0;
}
