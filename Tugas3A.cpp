#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

main(){
	//celsius langsung diketahui karena didalam soal disebutkan celsius adalah 37
	//tipe data float karena konversi berkemungkinan menghasilkan bilangan pecahan
	float celsius = 37,fahrenheit,reamur;
	
	fahrenheit = celsius * 4/5;
	reamur = (celsius * 9/5) + 32;
	//proses output
	cout<<"Celcius = "<<celsius<<endl;
	cout<<"Reamour = "<<reamur<<endl;
	cout<<"Fahrenheit = "<<fahrenheit<<endl;
	//akhir program
	getche();
}
