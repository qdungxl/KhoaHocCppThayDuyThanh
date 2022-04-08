#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	cout<<"Chuogn trinh tim so lon nhat, nho nhat va tong cua mang 1 chieu."<<endl;
	cout<<"Hay nhap vao so phan tu cua mang: ";
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i< n;i++){
		cout<<"Nhap vao gia tri phan tu thu "<<i+1<<": ";
		cin>>arr[i];
	}
	int sum = 0;
	int min = arr[0];
	int max = arr[0];
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(arr[i]>max) max = arr[i];
		if(arr[i]<min) min = arr[i];
	}
	cout<<"Gia tri nho nhat trong mang la "<<min<<endl;
	cout<<"Gia tri lon nhat trong mang la "<<max<<endl;
	cout<<"Tong gia tri trong mang "<<sum<<endl;
	return 0;
}
