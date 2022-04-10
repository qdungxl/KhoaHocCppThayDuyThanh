#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char str1[25];
	strcpy(str1,"mai quoc dung");
	for(int i=0;i<strlen(str1);i++){
		putchar(toupper(str1[i]));
	}
	cout<<endl;
	for(int i=0;i<strlen(str1);i++){
		putchar(tolower(str1[i]));
	}
	return 0;
}
