#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh kiem tra so hoan thien.";
	cout<<"Hay nhap vao so ban muon kiem tra : ";
	int x, kiemtra;
	cin>>x;
	cout<<endl;
	for (int i =1; i<x;i++){
		if(x%i==0) kiemtra+=i;
	}
	if(x==kiemtra){
		cout<<x<<" la so hoan thien.";
	}
	else{
		cout<<x<<" khong phai la so hoan thien.";
	}
	return 0;
}
