#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char *str = "Hello";
	cout<<str<<endl;
	char str2[] = "Obam\0a";
	cout<<str2<<endl;
	char str3[]={'M','A','I','\0'};
	cout<<str3<<endl;
	return 0;
}
