#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh toan.";
	cout<<"Hay nhap 2 so a, b : ";
	int a,b;
	cin>>a>>b;
	cout<<"Hay nhap phep toan giua a va b (+,-,*,/) : ";
	char ch;
	cin >> ch;
	switch(ch){
		case '+':
			cout<<a<<ch<<b<<"="<<a+b;
			break;
		case '-':
			cout<<a<<ch<<b<<"="<<a-b;
			break;
		case '*':
			cout<<a<<ch<<b<<"="<<a*b;
			break;
		case '/':
			if(b==0){
				cout<<"mau so bang 0, khong the thuc hien duoc phep chia.";
			}
			else
			{
				cout<<a<<ch<<b<<"="<<a/b;
			}			
			break;
				
	}
	return 0;
}
