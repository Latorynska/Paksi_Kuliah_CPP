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
void tampilListTiket(){
	cout<<"Kelas Patas : "<<endl;
	cout<<setw(25)<<left<<"\tJ. Tujuan Jakarta"<<": Rp 10.000, bonus Roti Merdeka"<<endl;
	cout<<setw(25)<<left<<"\tS. ujuan Semarang"<<": Rp 20.000, bonus Kartika Sari"<<endl;
	cout<<setw(25)<<left<<"\tY. Tujuan Yogyakarta"<<": Rp 25.000, bonus Dunkin Donuts"<<endl;
	cout<<setw(25)<<left<<"\tD. Tujuan Denpasar"<<": Rp 30.000, bonus Pizza Hut"<<endl<<endl;
	cout<<"Kelas Ekonomi : "<<endl;
	cout<<setw(25)<<left<<"\tJ. Tujuan Jakarta"<<": Rp 5.000, bonus tidak ada"<<endl;
	cout<<setw(25)<<left<<"\tS. ujuan Semarang"<<": Rp 10.000, bonus tidak ada"<<endl;
	cout<<setw(25)<<left<<"\tY. Tujuan Yogyakarta"<<": Rp 15.000, bonus tidak ada"<<endl;
	cout<<setw(25)<<left<<"\tD. Tujuan Denpasar"<<": Rp 20.000, bonus tidak ada"<<endl<<endl;
	cout<<setw(40)<<setfill('-')<<""<<"\n"<<setfill(' ');
}
int calculate(char tj_akhir, char kbis, string &bonus, string &tj, string &kls){
	int harga = 0;
	switch(kbis){
		case 'P' : case 'p' : {
			switch(tj_akhir){
				case 'J' : case 'j' : {
					harga = 10000;
					bonus = "Roti Merdeka";
					tj = "Jakarta";
					break;
				}
				case 'S' : case 's' : {
					harga = 20000;
					bonus = "Kartika Sari";
					tj = "Semarang";
					break;
				}
				case 'Y' : case 'y' : {
					harga = 25000;
					bonus = "Dunkin Donuts";
					tj = "Yogyakarta";
					break;
				}
				case 'D' : case 'd' : {
					harga = 30000;
					bonus = "Pizza Hut";
					tj = "Denpasar";
					break;
				}
				default : {
					cout<<"\nInput Tidak Valid!\n";
					tj = "Input Tidak Valid";
					break;
				}
			}
			kls = "Patas";
			break;
		}
		case 'E' : case 'e' : {
			switch(tj_akhir){
				case 'J' : case 'j' : {
					harga = 5000;
					bonus = "Tidak Ada";
					tj = "Jakarta";
					break;
				}
				case 'S' : case 's' : {
					harga = 10000;
					bonus = "Tidak Ada";
					tj = "Semarang";
					break;
				}
				case 'Y' : case 'y' : {
					harga = 15000;
					bonus = "Aqua";
					tj = "Yogyakarta";
					break;
				}
				case 'D' : case 'd' : {
					harga = 20000;
					bonus = "Aqua";
					tj = "Denpasar";
					break;
				}
				default : {
					cout<<"\nInput Tidak Valid!\n";
					tj = "Input Tidak Valid!";
					break;
				}
			}
			kls = "Ekonomi";
			break;
		}
		default : {
			cout<<"\nInput Tidak Valid!\n";
			tj = kls = "Input Tidak Valid!";
			break;
		}
	}
	return harga;
}
main(){
	char rep = 'Y';
	
	while(rep == 'y' || rep == 'Y'){
		string nama;
		char tj_akhir, kbis;
		int harga;
		string bonus, tj, kls;
		//output judul atau nama program
		system("CLS");
		TampilJudul("Sistem Bis Merdeka");
		//output list tiket
		cout<<endl;
		tampilListTiket();
		
		//proses input
		cout<<setw(31)<<left<<"Masukkan Nama Penumpang"<<" : ";getline(cin, nama);
		cout<<setw(31)<<left<<"Masukkan Tujuan Akhir (J/S/Y/D)"<<" : ";cin>>tj_akhir;
		cout<<setw(31)<<left<<"Masukkan Kelas Bis (P/E)"<<" : ";cin>>kbis;
		
		//proses pengolahan data
		harga = calculate(tj_akhir, kbis, bonus, tj, kls);
		//proses output akhir
		system("CLS");
		TampilJudul("Sistem Bis Merdeka");
		cout<<endl;
		cout<<setw(25)<<left<<"Nama Penumpang "<<" : "<<nama<<endl;
		cout<<setw(25)<<left<<"Tujuan Akhir"<<" : "<<tj<<endl;
		cout<<setw(25)<<left<<"Kelas Bis"<<" : "<<kls<<endl;
		cout<<setw(25)<<left<<"Harga Tiket"<<" : "<<harga<<endl;
		cout<<setw(25)<<left<<"Bonus"<<" : "<<bonus<<endl;
		
		cout<<endl<<endl<<"Ulangi Program? (Y/N) : "; cin>>rep;
		cout<<"Press any key...";
		getche();
		cin.ignore();
	}
	
	//akhir program
	cout<<"Selamat Tinggal ^_^";
	getche();
}
