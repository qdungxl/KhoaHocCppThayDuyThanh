#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char str1[25];
	char str2[25];
	strcpy(str1,"dung");
	strcpy(str2,"dung");
	int kq = strcmp(str1,str2);
	cout<<"Ket qua so sanh  = "<<kq;
	return 0;
}
