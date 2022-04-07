#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int Goc; // mot goc bat ky nhap tu ban phim
	double Radian;
	const double PI = 3.14;
	cout<<"Ban hay nhap vao mot goc : ";
	cin>>Goc;
	Radian = Goc*PI/180;
	double sinx = sin(Radian);
	double cosx = cos(Radian);
	double tanx = tan(Radian);
	double cotan = 1/tanx;
	cout<<"sin("<<Goc<<") = "<<sinx<<endl;
	cout<<"cos("<<Goc<<") = "<<cosx<<endl;
	cout<<"tan("<<Goc<<") = "<<tanx<<endl;
	cout<<"cotan("<<Goc<<") ="<<cotan<<endl;
	return 0;
}
