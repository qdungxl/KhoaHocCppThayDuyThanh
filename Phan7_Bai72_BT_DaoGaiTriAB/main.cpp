#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void swap(int *&pa, int *&pb);
int main(int argc, char** argv) {
	int a = 15;
	int b =20;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
void swap(int *&pa, int *&pb){
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
