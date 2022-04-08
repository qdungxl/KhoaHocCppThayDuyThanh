#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double A;
	double A1 = 1;
	double A2 =1;
	double x;
	int n;
	cout<<"Hay nhap cao mot so thuc x : " <<endl;
	cin>>x;
	cout<<"Hay nhap vao so tu nhien n : " << endl;
	cin>>n;
	for (int i =0; i<n;i++){
		A1 = A1*(x*x+x+1);
		A2 = A2*(x*x-x+1);
	}
	A = A1 + A2;
	cout<<"(x^2+x+1)^n + (x^2 -x +1)^n = " << A<<endl;
	return 0;
}
