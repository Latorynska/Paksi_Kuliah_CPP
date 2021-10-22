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
	cout<<setw(100)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(ctr)<<""<<x<<"\n";
	cout<<setw(100)<<setfill('=')<<"\n"<<setfill(' ');
}

main(){
	//deklarasi
	char kode;
	string nama;
	int gapok, jml_tnj;
	double biaya_tnj = 0;
	
	//ouput nama atau judul program
	TampilJudul("Hitung Biaya Tunjangan");
	//proses input data dasar
	cout<<"\n"<<setw(40)<<left<<"Masukkan Nama Pegawai"<<" : ";getline(cin, nama);
	cout<<setw(40)<<left<<"Masukkan Gaji Pokok"<<" : ";cin>>gapok;
	cout<<setw(40)<<left<<"Status Pegawai (S = Belum Menikah, D = Sudah Menikah)"<<" : ";cin>>kode;
	
	//proses pengolahan dan input data lanjutan
	switch(kode){
		case 'S' : case 's' : {
			cout<<"Pegawai Tidak Mendapatkan Tunjangan Lebih!"<<endl;
			break;
		}
		case 'D' : case 'd' : {
			cout<<setw(40)<<left<<"Jumlah Anak Dimiliki"<<" : ";cin>>jml_tnj;
			biaya_tnj +=  0.05 * gapok;
			if(jml_tnj <= 3){
				biaya_tnj += jml_tnj * 0.02 * gapok;
			}
			else{
				biaya_tnj += 3 * 0.02 * gapok;
				jml_tnj -= 3;
				biaya_tnj += jml_tnj * 0.03 * gapok;
			}
			break;
		}
		default : {
			cout<<"Input Status Pegawai Tidak Valid!";
			break;
		}
	}
	
	//proses output akhir
	system("cls");
	TampilJudul("Hasil Perhitungan");
	cout<<"\n"<<setw(40)<<left<<"Nama Pegawai"<<" : "<<nama<<endl;
	cout<<setw(40)<<left<<"Status Pegawai"<<" : ";
	if(kode == 'D' || kode == 'd'){
		cout<<"Sudah Menikah"<<endl;
	}
	else{
		cout<<"Belum Menikah"<<endl;
	}
	cout.precision(10); // agar angka ditampilkan secara presisi maksimal 10 digit
	cout<<setw(40)<<left<<"Gaji Pokok"<<" : "<<gapok<<endl;
	cout<<setw(40)<<left<<"Bonus Tunjangan"<<" : "<<biaya_tnj;
	cout<<setw(40)<<left<<"Gaji AKhir"<<" : "<<gapok + biaya_tnj;
	
		/* Ditulis dan dirancang oleh Paksi R G*/
}
