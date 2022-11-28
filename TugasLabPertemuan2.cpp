#include <iostream>
#include <conio.h>
using namespace std;
main(){
	//deklarasi
	int nominal;
	float diskon = 0;
	//input
	cout<<"Masukkan nominal belanja : "; cin>>nominal;
	//proses
	if(nominal > 100000){
		diskon = nominal * 0.1;
	}
	//output
	cout<<"Anda Mendapat diskon "<<diskon<<endl;
	cout<<"Total bayar adalah "<<nominal - diskon;
	getch();
}
