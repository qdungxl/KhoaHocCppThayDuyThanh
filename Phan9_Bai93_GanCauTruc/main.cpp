#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Book
{
	char title[50];
	char author[50];
	int pages;
	float price;
};
int main(int argc, char** argv) {
	Book b;
	cout<<"Nhap ten sach: ";
	gets(b.title);
	cout<<"Nhap tac gia: ";
	gets(b.author);
	cout<<"Nhap so trang: ";
	cin>>b.pages;
	cout<<"Nhap gia: ";
	cin>>b.price;
	cout<<endl;
	Book a = b;
	cout<<"Ten sach: "<<a.title<<endl;
	cout<<"Tac gia: "<<a.author<<endl;
	cout<<"pages: "<<a.pages<<endl;
	cout<<"price: "<<a.price<<endl;
	return 0;
}
