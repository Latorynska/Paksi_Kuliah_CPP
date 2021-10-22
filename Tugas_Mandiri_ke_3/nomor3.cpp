#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//function untuk menampilkan judul program
void TampilJudul(string x){
	//untuk mengatur penempatan agar teks berada di tengah
	int ctr = (100 - x.length())/2; 
	//output
	cout<<setw(100)<<setfill('=')<<""<<"\n"<<setfill(' ');
	cout<<setw(ctr)<<""<<x<<"\n";
	cout<<setw(100)<<setfill('=')<<""<<"\n"<<setfill(' ');
}

main(){
	//deklarasi variabel
	char status; //L untuk langganan, B untuk bukan langganan
	int blj, disc = 0; //blj untuk input belanjaan pembeli, disc untuk diskon
	double total; //total untuk hasil akhir pengurangan setelah mendapat diskon
	
	//tampilkan judul atau nama program
	TampilJudul("TOSERBA Toko Serba Ada");
	
	//proses input data awal
	cout<<"\n"<<setw(40)<<left<<"Status Langganan (L = Langganan, B = Bukan Langganan)"<<" : ";cin>>status;
	cout<<setw(40)<<left<<"Masukkan Total Belanja"<<" : ";cin>>blj;
	
	//proses penghitungan data
	if(status == 'L' || status == 'l'){
		if(blj > 30000){
			disc = 0.2 * blj;
		}
		else{
			disc = 0.1 * blj;
		}
	}
	total = blj - disc;
	
	//proses output akhir
	system("cls");
	TampilJudul("Hasil Perhitungan TOSERBA");
	cout<<"\n"<<setw(60)<<left<<"Status Langganan (L = Langganan, B = Bukan Langganan)"<<" : "<<status<<endl;
	cout<<setw(60)<<left<<"Biaya Belanjaan"<<" : "<<blj<<endl;
	cout<<setw(60)<<left<<"Diskon Didapat"<<" : "<<disc<<endl;
	cout<<setw(70)<<setfill('=')<<""<<"\n"<<setfill(' ');
	cout<<setw(60)<<left<<"Biaya Akhir"<<" : "<<total;
	
	getche();
	
		/* Ditulis dan dirancang oleh Paksi R G*/
}
