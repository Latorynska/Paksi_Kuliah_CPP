#include <iostream>
using namespace std;

main(){
	float sisi, r, hasil, tinggi;
	const float PHI = 3.14;
	int menu;
	cout<<"Kalkulator"<<endl;
	cout<<"1. Volume Kubus"<<endl;
	cout<<"2. Luas Lingkaran"<<endl;
	cout<<"3. Volume Tabung"<<endl;
	cin>>menu;
	switch(menu){
		case 1 : {
			cout<<"Masukkan panjang sisi (cm) : ";cin>>sisi;
			hasil = sisi*sisi*sisi;
			break;
		}
		case 2 : {
			cout<<"Masukkan panjang jari-jari (cm) : ";cin>>r;
			hasil = PHI * (r * r);
			break;
		}
		case 3 : {
			cout<<"Masukkan panjang jari-jari alas (cm) : ";cin>>r;
			cout<<"Masukkan tinggi tabung (cm) : ";cin>>tinggi;
			hasil = (PHI * (r * r)) * tinggi;
			break;
		}
		default : {
			cout<<"Pilihan Tidak Valid!"<<endl;
			break;
		}
	}
	cout<<"Hasilnya Adalah : "<<hasil<<" cm"<<endl;
}
