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
	//deklarasi
	string nama;
	int bvcd, bonus = 0; //banyak vcd yang disewa, bonus untuk anggota lama
	char anggota;
	string keanggotaan = "Baru";
	double bs,total; //bs untuk biaya sewa, total untuk total pembayaran
	
	//Judul Program
	TampilJudul("Rental VCD");
	
	//proses input
	cout<<"\n"<<setw(40)<<left<<"Masukkan Nama Anggota"<<" : ";getline(cin, nama);
	cout<<setw(40)<<left<<"Status Keanggotaan (L = lama, B = baru)"<<" : ";cin>>anggota;
	cout<<setw(40)<<left<<"Banyak VCD Yang Disewa"<<" : ";cin>>bvcd;
	
	//proses mengolah data
	switch(anggota){
		case 'L' : case 'l' : {
			if(bvcd == 2 ){
			bonus = 1;
			}
			else if (bvcd > 5){
				bonus = 2;
			}
			keanggotaan = "Lama";
			total = bvcd * 2500;
			break;
		}
		case 'B' : case 'b' : {
			total = bvcd * 2500 + 10000;
			break;
		}
		default: {
			cout<<"Input Keanggotaan tidak valid!";
			//jika input tidak valid, lewati proses output dan langsung ke akhir program
			goto END;
			break;
		}
	}
	
	//proses output
	system("cls");
	cout<<setw(40)<<left<<"Nama Anggota"<<" : "<<nama<<endl;
	cout<<setw(40)<<left<<"Status Keanggotaan"<<" : anggota "<<keanggotaan<<endl;
	cout<<setw(40)<<left<<"Banyak VCD Yang Disewa"<<" : "<<bvcd;
	if(bonus > 0){
		cout<<" Bonus "<<bonus<<"\n";
	}
	else{
		cout<<endl;
	}
	cout<<setw(60)<<setfill('=')<<""<<"\n"<<setfill(' ');
	cout<<setw(40)<<left<<"Total Pembayaran"<<" : "<<total<<endl;
	
	
	//akhir program
	END:
	getche();
	/* Ditulis dan dirancang oleh Paksi R G*/
}
