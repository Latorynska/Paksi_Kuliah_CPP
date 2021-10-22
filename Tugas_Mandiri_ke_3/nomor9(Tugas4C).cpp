#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//function untuk menampilkan judul program
void TampilJudul(string x){
	system("CLS");
	//untuk mengatur penempatan agar teks berada di tengah
	int ctr = (100 - x.length())/2; 
	//output
	cout<<setw(100)<<setfill('=')<<""<<"\n"<<setfill(' ');
	cout<<setw(ctr)<<""<<x<<"\n";
	cout<<setw(100)<<setfill('=')<<""<<"\n"<<setfill(' ');
}

main(){
	
	//deklarasi
	int max;
	
	
	TampilJudul("Program Penampil Segitiga");
	cout<<"Masukkan nilai : ";cin>>max;
	cout<<endl;
	
	for(int i = max; i >= 0; i--){
		for(int x = 0; x <= i; x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
