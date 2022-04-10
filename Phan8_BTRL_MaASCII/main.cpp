#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char str[25];
	cout<<"Chuoi 1: ";
	gets(str);
	//cout<<"Chieu dai cua chuoi: "<<strlen(str);
	for(int i=0;i<strlen(str);i++){
		cout<<(int)(str[i])<<"\t";
	}
	return 0;
}
