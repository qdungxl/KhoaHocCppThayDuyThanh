#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	FILE *file = fopen("csdt.txt","w");
	fputs("SV01;Nguyen Van Teo;1/1/1998\n",file);
	fputs("SV02;Nguyen Van Meo;2/3/1998\n",file);
	fputs("SV03;Nguyen Van Anh;3/4/1998\n",file);
	fclose(file);
	
	return 0;
}
