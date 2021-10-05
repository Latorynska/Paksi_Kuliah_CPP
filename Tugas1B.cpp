#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

main(){
	//deklarasi variabel yang akan digunakan
	int pulsa_terpakai;
	const int harga_pulsa = 100;
	const double biaya_langganan = 10000;
	double biaya_pulsa;
	char nama_langganan[100], nomor_langganan[25];
	char alamat_langganan[255];
	
	cout<<"Masukkan Nomor Langganan 	: ";gets(nomor_langganan);
	cout<<"Masukkan Nama Langganan		: ";gets(nama_langganan);
	cout<<"Masukkan Alamat Langganan 	: ";gets(alamat_langganan);
	cout<<"Masukkan Pemakaian Pulsa 	: ";cin>>pulsa_terpakai;
	biaya_pulsa = pulsa_terpakai * harga_pulsa;
	system("CLS");
	cout<<"Nomor Langganan	: "<<nomor_langganan<<endl;
	cout<<"Nama Langganan	: "<<nama_langganan<<endl;
	cout<<"Alamat		: "<<alamat_langganan<<endl<<endl;
	cout<<"Perincian Tagihan:"<<endl;
	
	cout<<setfill('-')<<setw(50)<<"\n"<<setfill(' ');
	
	cout<<"Biaya Berlangganan		: Rp."<<biaya_langganan<<endl;
	cout.precision(15);
	cout<<"Biaya Pulsa "<<pulsa_terpakai<<" * Rp.100	: Rp."<<biaya_pulsa<<endl;
	getche();
}
