#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

main(){
	int status, lk, usia, bonus;
	string nama;
	
	cout<<"Masukkan Nama Pegawai : ";getline(cin, nama);
	cout<<"Masukkan Usia Pegawai : ";cin>>usia;
	cout<<"Kedudukan Pegawai"<<endl;
	cout<<"1. Staff"<<endl;
	cout<<"2. Non-Staff"<<endl;
	cout<<"Masukkan Kududukan Pegawai : "; cin>>status;
	cout<<"Masukkan Lama Kerja   : ";cin>>lk;
	
	switch(status){
		case 1 : {
			if(lk >= 5 && usia >=50 ){
				bonus = 1000000;
			}
			else{
				bonus = 500000;
			}
			break;
		}
		case 2 : {
			if(lk > 5 && usia > 50){
				bonus = 400000;
			}
			else if(usia > 50){
				bonus = 300000;
			}
			else{
				bonus = 250000;
			}
			break;
		}
		default : {
			cout<<"Kedudukan Pegawai Invalid!";
			return 0;
			break;
		}
	}
	
	//propses output
	system("CLS");
	cout<<setw(50)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(26)<<"Bonus"<<endl;
	cout<<setw(50)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(20)<<left<<"Nama"<<" : "<<nama<<endl;
	cout<<setw(20)<<left<<"Usia"<<" : "<<usia<<endl;
	cout<<setw(20)<<left<<"Bonus Didapat"<<" : "<<bonus<<endl;
}
