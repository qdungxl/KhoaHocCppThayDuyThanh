#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Hay nhap so phan tu cua mang: ";
	int n, luutam;
	cin>>n;
	int arr[n];
	int i = 0;
	int giatri = 0;
	while(i<n){
		cout<<"Hay nhap gia tri phan tu thu "<<i+1<<": ";		
		cin>>giatri;
		if (i==0){
			arr[0] = giatri;
			i++;
			continue;
		}
		bool kiemtra = true;
		for(int j=0;j<i;j++){
			if(arr[j]>=giatri) {
				cout<<"Gia tri nhap phai la chuoi tang dan...";
				kiemtra = false;
				break;
			}
		}
		if(kiemtra == true) {
			arr[i] = giatri;
			i++;
		}
	}
	cout<<"Chuoi da nhap la: ";
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
