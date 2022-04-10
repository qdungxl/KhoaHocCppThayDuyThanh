#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	char str[25];
	cout<<"Nhap chuoi: ";
	gets(str);
	cout<<"Chuoi sau khi dao: ";
	for(int i=strlen(str)-1;i>=0;i--){
		cout<<str[i];
	}
	return 0;
}
