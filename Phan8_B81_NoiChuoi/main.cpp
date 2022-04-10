#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char *str = new char[50];
	char *str1 = new char[25];
	strcpy(str,"mai ");
	strcpy(str1,"quoc dung");
	//strcat(str,str1); //noi chuoi str1 vao chuoi str
	//cout<<str<<endl;
	strncat(str,str1,4); // noi n ky tu dau tien cua str1 vao str.
	cout<<str<<endl;
	return 0;
}
