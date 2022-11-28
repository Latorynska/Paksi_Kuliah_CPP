#include <iostream>
using namespace std;

main(){
	int NUts, NUas, NAkhir;
	string status;
	
	cout<<"Masukkan Nilai UTS Siswa : ";cin>>NUts;
	cout<<"Masukkan Nilai UAS Siswa : ";cin>>NUas;
	
	if(NUts > 70){
		NAkhir = NUts;
		status = "lulus";
	}
	else{
		NAkhir = (NUts * 40 / 100) + (NUas * 60 / 100);
		if(NAkhir >= 60){
			status = "lulus";
		}
		else{
			status = "tidak lulus";
		}
	}
	
	cout<<"Nilai Akhir Siswa : "<<NAkhir<<endl;
	cout<<"Status Kelulusan : "<<status<<endl;
	cin.get();
}
