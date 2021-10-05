#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

main(){
	float celsius = 37,fahrenheit,reamur;
	
	fahrenheit = celsius * 4/5;
	reamur = (celsius * 9/5) + 32;
	cout<<"Celcius = "<<celsius<<endl;
	cout<<"Reamour = "<<reamur<<endl;
	cout<<"Fahrenheit = "<<fahrenheit<<endl;
	
	getche();
}
