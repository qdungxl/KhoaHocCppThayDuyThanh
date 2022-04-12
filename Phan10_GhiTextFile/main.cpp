#include <iostream>
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void LuuFile(){
	FILE *file = fopen("csdt.txt","w");
	fputs("SV01;Nguyen Van Teo;1/1/1998\n",file);
	fputs("SV02;Nguyen Van Meo;2/3/1998\n",file);
	fputs("SV03;Nguyen Van Anh;3/4/1998\n",file);
	fclose(file);
}
void DocFile()
{
	FILE *file = fopen("csdt.txt","r");
	char *s="\0";
	do
	{
		char line[150];
		s = fgets(line,150,file);
		if(s==NULL)
		{
			break;
		}
		cout<<s<<endl;
	}
	while(true);
	fclose(file);
}
int main(int argc, char** argv) {
	
	DocFile();
	return 0;
}
