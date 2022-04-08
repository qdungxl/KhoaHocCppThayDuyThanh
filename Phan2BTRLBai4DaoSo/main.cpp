#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	cout<<"Nhap mot so nguyen co 3 chu so : "<<endl;
	cin>>x;
	int donvi,chuc,tram;
	donvi = x%10;
	chuc = x/10 - (x/100)*10;
	tram = x/100;
	cout<<"Ket qua dao so : "<<donvi<<chuc<<tram;
	return 0;
}
