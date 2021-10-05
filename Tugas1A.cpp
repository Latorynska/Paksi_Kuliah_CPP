#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

main(){
	
	//deklarasi
	char nama[50],alamat[255]; //variabel untuk nama dan alamat pegawai
	double gaji_pokok,tunjangan, pajak, gaji_bersih; //variabel untuk input dan pengolahan gaji pegawai
	
	//proses input data
	cout<<"Masukkan Nama       : "; gets(nama);
	cout<<"Masukkan Alamat     : "; gets(alamat);
	cout<<"Masukkan Gaji Pokok : "; cin>>gaji_pokok;
	
	//proses pengolahan data
	tunjangan = gaji_pokok * 15 / 100;
	pajak = 7.5/100 * gaji_pokok;
	gaji_bersih = gaji_pokok + tunjangan - pajak;
	
	//membersihkan output di layar
	system("CLS");
	
	//output utama hasil proses penghitungan
	cout<<"Nama 		: "<<nama<<endl;
	cout<<"Alamat		: "<<alamat<<endl;
	cout.precision(10);
	cout<<"Gaji Pokok	: RP."<<gaji_pokok<<endl;
	cout<<"Tunjangan	: Rp."<<tunjangan<<endl;
	cout<<"Pajak		: Rp."<<pajak<<endl;
	cout<<"Gaji Bersih	: Rp."<<gaji_bersih<<endl; 
	getche();
}
