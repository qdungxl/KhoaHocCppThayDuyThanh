#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int Time;
	int hour, minute, second;
	cout<<"ban hay nhap vao 1 so giay: " << endl;
	cin>> Time;
	hour = (Time/3600)%24;
	minute = (Time/3600)/60;
	second = (Time%3600)%60;
	int hourtemp = hour>12?hour-12:hour;
	cout<<hourtemp<<":"<<minute<<":"<<second<<(hour>12?" PM":" AM")<<endl;
	return 0;
}
