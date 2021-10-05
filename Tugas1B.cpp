#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

main(){
	//deklarasi variabel yang akan digunakan
	int pulsa_terpakai; //variabel untuk input pemakaian pulsay pelanggan
	const int harga_pulsa = 100; //harga tetap rupiah per penggunaan pulsa
	const int biaya_langganan = 10000; //biaya langganan pokok pelanggan per bulan
	int biaya_pulsa; //variable untuk jumlah rupiah yang harus dibayarkan pelanggan per pulsa
	char nama_langganan[100], nomor_langganan[25]; //variabel untuk nama dan alamat pelanggan
	char alamat_langganan[255]; //variabel penampung alamat pengguna
	
	cout<<"Masukkan Nomor Langganan 	: ";gets(nomor_langganan); //input nomor pelanggan
	cout<<"Masukkan Nama Langganan		: ";gets(nama_langganan); //input nama pelanggan
	cout<<"Masukkan Alamat Langganan 	: ";gets(alamat_langganan); //input alamat pelanggan
	cout<<"Masukkan Pemakaian Pulsa 	: ";cin>>pulsa_terpakai; //input pulsa yang dipakai pelanggan
	
	//proses penghitungan biaya rupiah yang harus dibayar pelanggan per pulsa
	biaya_pulsa = pulsa_terpakai * harga_pulsa;
	
	//membersihkan layar untuk output hasil penghitungan data
	system("CLS");
	
	//output hasil penghitungan dari input
	cout<<"Nomor Langganan	: "<<nomor_langganan<<endl;
	cout<<"Nama Langganan	: "<<nama_langganan<<endl;
	cout<<"Alamat		: "<<alamat_langganan<<endl<<endl;
	cout<<"Perincian Tagihan:"<<endl;
	
	cout<<setfill('-')<<setw(50)<<"\n"<<setfill(' '); //sebagai pemisah
	
	cout<<"Biaya Berlangganan		: Rp."<<biaya_langganan<<endl;
	cout.precision(15);//agar output angka dapat ditampilkan secara presisi dengan maksimal 15 digit angka double
	cout<<"Biaya Pulsa "<<pulsa_terpakai<<" * Rp.100	: Rp."<<biaya_pulsa<<endl;
	getche();
}
