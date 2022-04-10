#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void Test(){
	char str1[25];
	cout<<"Moi ban nhap chuoi: ";
	gets(str1);
	cout<<"Chuoi ban da nhap la: ";
	puts(str1);
	
	char *str2 = new char[25];
	cout<<"Moi ban nhap chuoi: ";
	gets(str2);
	cout<<"Chuoi ban da nhap la: ";
	puts(str2);
}
int main(int argc, char** argv) {
	
	char *str3 = new char[25];
	cout<<"Moi ban nhap chuoi: ";
	cin.getline(str3,255);
	cout<<"Chuoi ban da nhap la: ";
	puts(str3);
	cout<<"Kich thuoc thuc su cua chuoi: "<<strlen(str3);
	return 0;
}
