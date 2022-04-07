#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char KyTu;
	cout<<"Nhap vao mot ky tu :" << endl;
	cin>> KyTu;
	cout<<"Ma ASCII cua ky tu "<<KyTu<<" la : "<<(int)(KyTu)<<endl;
	cout << "Ky tu tiep theo trong bang ma ASCII la " << (char)(KyTu + 1)<<endl;
	return 0;
}
