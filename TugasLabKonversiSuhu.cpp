#include <iostream>
#include <conio.h>
using namespace std;

main(){
	//deklarasi variabel celsius
	float celsius;
	
	cout<<"Masukkan suhu celsius : "; cin>>celsius;//proses input suhu celsius
	cout<<"Suhu dalam satuan fahrenheit : "<< celsius * 1.8 + 32; //hasil langsung di outputkan, tidak perlu dimasukkan ke variabel mana pun
}
