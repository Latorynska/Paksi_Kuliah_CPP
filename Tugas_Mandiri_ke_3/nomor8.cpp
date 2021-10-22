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
	int unsigned inp;
	int jml50 = 0, jml20 = 0, jml10 = 0, jml5 = 0, jml1 = 0, jml500p = 0;
	
	//output judul atau nama program
	TampilJudul("Pemecah Nominal");
	
	//proses input
	cout<<"Masukkan jumlah uang kelipatan (500) : "; cin>>inp;
	
	//proses penghitungan
	jml50 = inp / 50000;
	inp %= 50000;
	
	jml20 = inp / 20000;
	inp %= 20000;
	
	jml10 = inp / 10000;
	inp %= 10000;
	
	jml5 = inp / 5000;
	inp %= 5000;
	
	jml1 = inp / 1000;
	inp %= 1000;
	
	jml500p = inp / 500;
	
	
	//proses output
	cout<<"Pecahan yang diperlukan adalah"<<endl<<endl;
	if(jml50 != 0){
		cout<<"\t"<<jml50<<" pecahan 50.000"<<endl<<endl;
	}
	if(jml20 != 0){
		cout<<"\t"<<jml20<<" pecahan 20.000"<<endl<<endl;
	}
	if(jml10 != 0){
		cout<<"\t"<<jml10<<" pecahan 10.000"<<endl<<endl;
	}
	if(jml5 != 0){
		cout<<"\t"<<jml5<<" pecahan 5.000"<<endl<<endl;
	}
	if(jml1 != 0){
		cout<<"\t"<<jml1<<" pecahan 1.000"<<endl<<endl;
	}
	if(jml500p != 0){
		cout<<"\t"<<jml500p<<" pecahan 500"<<endl<<endl;
	}
	//akhir program
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
