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
	int gol; //golongan karyawan, diisi dengan 1 2 3;
	int jkrj; //jam kerja
	string nama;
	double totupah, bnslmbr = 0;//total, dan bonus lembur
	
	//output nama atau judul program
	TampilJudul("Penghitung Upah Kerja Pegawai");
	
	//proses input
	cout<<"\n"<<setw(40)<<left<<"Masukkan Nama Pegawai"<<" : ";getline(cin, nama);
	cout<<setw(40)<<left<<"Masukkan Golongan Pegawai (1, 2 ,3)"<<" : ";cin>>gol;
	cout<<setw(40)<<left<<"Masukkan Jam Kerja Pegawai"<<" : ";cin>>jkrj;
	
	//proses penghitungan utama
	switch(gol){
		case 1 : {
			if(jkrj > 8){
				bnslmbr = (jkrj - 8) * 400;
			}
			totupah = 2250 + bnslmbr;
			break;
		}
		case 2 : {
			if(jkrj > 8){
				bnslmbr = (jkrj - 8) * 475;
			}
			totupah = 2600 + bnslmbr;
			break;
		}
		case 3 : {
			if(jkrj > 8){
				bnslmbr = (jkrj - 8) * 600;
			}
			totupah = 3250 + bnslmbr;
			break;
		}
		default : {
			cout<<"Input Golongan Tidak Valid!";
			goto END;
			break;
		}
	}
	
	//proses output akhir
	system("cls");
	TampilJudul("Hasil Perhitungan");
	cout<<"\n"<<setw(40)<<left<<"Nama Karyawan"<<" : "<<nama<<endl;
	cout<<setw(40)<<left<<"Golongan Karyawan"<<" : Golongan "<<gol<<endl;
	cout<<setw(40)<<left<<"Upah Harian"<<" : Rp. "<<totupah - bnslmbr<<endl;
	cout<<setw(40)<<left<<"Bonus Lembur"<<" : Rp. "<<bnslmbr<<endl;
	cout<<setw(40)<<left<<"Total Upah Harian"<<" : Rp. "<<totupah<<endl;
	
	END:
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
