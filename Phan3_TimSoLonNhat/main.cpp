#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	cout<<"Tim so lon nhat trong 3 so."<<endl;
	cout<<"Hay nhap 3 so a,b,c : ";
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"So lon nhat trong ba so la : ";
	int max;
	max = a>b&&a>c?a:(b>a&&b>c?b:c);
	cout<<max;
	return 0;
}
