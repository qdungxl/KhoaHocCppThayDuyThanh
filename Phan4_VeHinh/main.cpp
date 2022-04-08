#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	for(int i =0;i <= 6;i++){
		for(int j=0;j<=6;j++){	
		    if(i==3)
			{
				cout<<"*";
				continue;
			}
			if(i<3)
			{
				if(j==i||j==0)
				{
				cout<<"*";
				continue;
				}
			}
			else{
				if(j==i||j==6)
				{
				cout<<"*";
				continue;
				}
			}			
			
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
