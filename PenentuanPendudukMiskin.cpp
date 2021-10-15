#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>

using namespace std;

main(){
	//deklarasi variabel
	//jt = jumlah tanggungan
	int umur, pendapatan, status, jt;
	string kategori, nama, status_akhir;
	
	//input nama dan umur
	cout<<"Masukkan Nama :";getline(cin, nama);
	cout<<"Masukkan Umur :";cin>>umur;
	
	//proses
	//input data lainnya berdasarkan inputan umur
	if(umur >= 18){
		cout<<"\nStatus Saat ini"<<endl;
		cout<<"1. Bekerja"<<endl;
		cout<<"2. Tidak Bekerja"<<endl;
		cout<<"Masukkan Status : ";cin>>status;
		if(status == 1){
			status_akhir = "Bekerja";
			cout<<"Masukkan Pendapatan : ";cin>>pendapatan;
			cout<<"Masukkan Jumlah Tanggungan : ";cin>>jt;
			if(pendapatan/jt > 300000 ){
				kategori = "Penduduk Tidak Miskin";
			}
			else{
				kategori = "Penduduk Miskin";
			}
		}
		else{
			status_akhir = "Tidak Bekerja";
			kategori = "Penduduk Miskin";
		}
	}
	else{
		cout<<"Status Saat ini"<<endl;
		cout<<"1. Sekolah"<<endl;
		cout<<"2. Tidak Sekolah"<<endl;
		cout<<"Masukkan Status : ";cin>>status;
		if(status == 1){
			status_akhir = "Pelajar";
			kategori = "Penduduk Tidak Miskin";
		}
		else{
			status_akhir = "Bukan Pelajar";
			kategori = "Penduduk Miskin";
		}
	}
	
	//propses output
	system("CLS");
	cout<<setw(50)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(26)<<"Hasil"<<endl;
	cout<<setw(50)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(20)<<left<<"Nama"<<" : "<<nama<<endl;
	cout<<setw(20)<<left<<"Usia"<<" : "<<umur<<endl;
	cout<<setw(20)<<left<<"Status saat ini"<<" : "<<status_akhir<<endl;
	cout<<setw(20)<<left<<"Status ekonomi"<<" : "<<kategori<<endl;
	
	//akhir program
	getch();
	
	/* program ini ditulis dan dikembangkan oleh Paksi Ringkang G.*/
}
