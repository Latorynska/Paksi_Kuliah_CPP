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
	int ank[4];
	TampilJudul("Bilangan Menurun Dari 8");
	
	for(int i = 5; i >0; i--){
		ank[i-1] = 8 - i;
		cout<<"Bilangan ke-"<<i<<" adalah : "<<ank[i-1]<<endl;
	}
	
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
