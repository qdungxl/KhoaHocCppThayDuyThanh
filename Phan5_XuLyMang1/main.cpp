#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Tim so lon nhat trong mang."<<endl;
	int n;
	cout<<"Hay nhap vao so phan tu trong mang : ";
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cout<<"Nhap gia tri cho phan tu thu "<<i+1<< " : ";
		cin>>arr[i];
		cout<<endl;
	}
	int max = arr[0];
	for(int i =1; i<n;i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	cout<<"Gia tri lon nhat trong mang la: "<<max;
	return 0;
}
