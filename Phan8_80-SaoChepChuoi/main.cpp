#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char *str = new char[25];
	char *str2 = new char[25];
	char *str3 = new char[25];
	cout<<"Nhap chuoi 1: ";
	gets(str);
	cout<<"Chuoi 2: ";
	strcpy(str2, str);
	puts(str2);
	cout<<"Chuoi 3: ";
	strncpy(str3,str,2);
	puts(str3);
	return 0;
}
