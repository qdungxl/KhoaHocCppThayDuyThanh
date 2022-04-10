#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char str1[25];
	strcpy(str1,"hello");
	char *p =strchr(str1,'l');
	if(p!=NULL){
		cout<<"Tim thay 'l' o vi tri = "<<p-str1;
	}
	return 0;
}
