#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Chuong trinh dao chuoi 2 chieu.";
	int n;
	cout<<"Hay nhap kich thuoc mang: ";
	cin>>n;
	int arr[n][n];
	for(int i = 0; i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Hay nhap gai tri phan tu thu ["<<i<<","<<j<<"] : "<<endl;
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i<n;i++){		
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
