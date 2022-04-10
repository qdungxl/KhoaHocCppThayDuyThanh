#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int **p = new int*[5];
	for(int i=0;i<5;i++){
		p[i]=new int[7];// hay *(p+i) = new int[7]. Nhu nhau.
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<7;j++){
			//p[i][j] = i+j;
			*(*(p+i)+j) = i +j; // tuong duong voi dong ben tren.
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<7;j++){
			cout<<*(*(p+i)+j)<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
