#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh tong chu so trong so."<<endl;
	int n, tong=0;
	cout<<"Hay nhap vao mot so nguyen: ";
	cin>>n;
	do{
		tong+= n%10;
		n=n/10;
	}while(n>0);
	cout<<"Tong cac chu so = " << tong;
	return 0;
}
