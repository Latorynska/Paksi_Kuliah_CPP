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
		cout<<"Kelas Patas : "<<endl;
		cout<<setw(25)<<left<<"\tJ. Tujuan Jakarta"<<": "<<endl;
		cout<<setw(25)<<left<<"\tS. ujuan Semarang"<<": "<<endl;
		cout<<setw(25)<<left<<"\tY. Tujuan Yogyakarta"<<": "<<endl;
		cout<<setw(25)<<left<<"\tD. Tujuan Denpasar"<<": "<<endl<<endl;
		cout<<"Kelas Ekonomi : "<<endl;
		cout<<setw(25)<<left<<"\tJ. Tujuan Jakarta"<<": "<<endl;
		cout<<setw(25)<<left<<"\tS. ujuan Semarang"<<": "<<endl;
		cout<<setw(25)<<left<<"\tY. Tujuan Yogyakarta"<<": "<<endl;
		cout<<setw(25)<<left<<"\tD. Tujuan Denpasar"<<": "<<endl<<endl;
		cout<<setw(40)<<setfill('-')<<""<<"\n"<<setfill(' ');
		
		//proses input
		cout<<setw(31)<<left<<"Masukkan Nama Penumpang"<<" : ";getline(cin, nama);
		cout<<setw(31)<<left<<"Masukkan Tujuan Akhir (J/S/Y/D)"<<" : ";cin>>tj_akhir;
		cout<<setw(31)<<left<<"Masukkan Kelas Bis (P/E)"<<" : ";cin>>kbis;
		
		//proses pengolahan data
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
		/* Ditulis dan dirancang oleh Paksi R G*/
}
