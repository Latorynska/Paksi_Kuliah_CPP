#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//function untuk menampilkan judul program
void TampilJudul(string x, char cf){
	system("CLS");
	//untuk mengatur penempatan agar teks berada di tengah
	int ctr = (100 - x.length())/2; 
	//output
	cout<<setw(100)<<setfill(cf)<<""<<"\n"<<setfill(' ');
	cout<<setw(ctr)<<""<<x<<"\n";
	cout<<setw(100)<<setfill(cf)<<""<<"\n"<<setfill(' ');
}
void JudulTabel(string x, char cf){
	//untuk mengatur penempatan agar teks berada di tengah
	int ctr = (100 - x.length())/2; 
	//output
	cout<<setw(100)<<setfill(cf)<<""<<"\n"<<setfill(' ');
	cout<<"|"<<setw(ctr-1)<<""<<x<<setw(100-(ctr+x.length()))<<"|"<<"\n";
	cout<<setw(100)<<setfill(cf)<<""<<"\n"<<setfill(' ');
}
void TableRow(int cnt, string col1, string col2, string col3, string col4){
	cout<<"| "<<cnt<<". "<<setw(19)<<left<<col1<<"|";
	cout<<" "<<setw(23)<<left<<col2<<"|";
	cout<<" "<<setw(23)<<left<<col3<<"|";
	cout<<" "<<setw(23)<<left<<col4<<"|\n";
	cout<<setw(100)<<setfill('-')<<""<<"\n"<<setfill(' ');
}

main(){
	//deklarasi
	int kode_merk,jml_beli, harga, totbyr;
	char uk_merk;
	char repeat = 'y';
	
	//ulangi selama nilai repeat adalah y atau Y
	while(repeat == 'y' || repeat == 'Y'){
		
		//output Nama atau judul Program
		TampilJudul("Toko P&D",'=');
		cout<<endl;
		{
			//judul tabel, list barang
			JudulTabel("List Barang",'='); 
			//sub-header tabel
			cout<<"|"<<setw(23)<<left<<" Merk"<<"|";
			cout<<setw(24)<<left<<" Besar"<<"|";
			cout<<setw(24)<<left<<" Sedang"<<"|";
			cout<<setw(24)<<left<<" Kecil"<<"|\n";
			cout<<setw(100)<<setfill('-')<<""<<"\n"<<setfill(' ');
			//isi tabel
			TableRow(1, "Dancow", "12500", "5500", "3200");
			TableRow(2, "Indomilk", "9400", "4800", "3050");
			TableRow(3, "Milo", "9250", "4350", "3100");
			TableRow(4, "Suprime", "10300", "6200", "3400");
			TableRow(5, "Sustagen", "18500", "16400", "9200");
			TableRow(6, "Ovaltine", "132500", "7350", "4150");
			cout<<endl;
		}
		
		//proses input
		cout<<setw(25)<<left<<"Masukkan Nomor Barang"<<" : "; cin>>kode_merk;
		cout<<setw(25)<<left<<"Masukkan Ukuran (S/B/K)"<<" : ";cin>>uk_merk;
		cout<<setw(25)<<left<<"Jumlah Pembelian"<<" : ";cin>>jml_beli;
		
		//proses pengolahan
		switch(kode_merk){
			case 1 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 12500;
						break;
					}
					case 'S' : case 's' : {
						harga = 5500;
						break;
					}
					case 'K' : case 'k' : {
						harga = 3200;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			case 2 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 9400;
						break;
					}
					case 'S' : case 's' : {
						harga = 4800;
						break;
					}
					case 'K' : case 'k' : {
						harga = 3050;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			case 3 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 9250;
						break;
					}
					case 'S' : case 's' : {
						harga = 4350;
						break;
					}
					case 'K' : case 'k' : {
						harga = 3100;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			case 4 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 10300;
						break;
					}
					case 'S' : case 's' : {
						harga = 6200;
						break;
					}
					case 'K' : case 'k' : {
						harga = 3400;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			case 5 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 18500;
						break;
					}
					case 'S' : case 's' : {
						harga = 16400;
						break;
					}
					case 'K' : case 'k' : {
						harga = 9200;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			case 6 : {
				switch(uk_merk){
					case 'B' : case 'b' : {
						harga = 13250;
						break;
					}
					case 'S' : case 's' : {
						harga = 7350;
						break;
					}
					case 'K' : case 'k' : {
						harga = 4150;
						break;
					}
					default : {
						cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
						getche();
						break;
					}
				}
				break;
			}
			default : {
				cout<<endl<<"Input Tidak Valid!"<<endl<<endl;
				getche();
				break;
			}
		}
		totbyr = jml_beli * harga;
		
		
		//prose output akhir
		cout<<setw(25)<<left<<"Harga Barang"<<" : "<<harga<<endl;
		cout<<setw(35)<<setfill('-')<<""<<"\n"<<setfill(' ');
		cout<<setw(25)<<left<<"Total Pembayaran"<<" : "<<totbyr<<endl;
		cout<<endl<<endl<<"Ulangi? (y/n) : "; cin>>repeat;
	}
	
	//akhir program
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
