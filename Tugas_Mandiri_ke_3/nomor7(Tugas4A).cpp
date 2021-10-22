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
	//deklarasi
	int inp[9], min, max,imin, imax;
	
	TampilJudul("Pencari Bilangan Terbesar");
	
	
	//proses input
	for(int i = 0; i < 10; i++){
		cout<<"Masukkan angka ke-"<<i+1<<" : ";
		cin>>inp[i];
	}
	min = max = inp[9];
	//proses pencarian
	for(int i = 0; i < 10; i++){
		if(inp[i] <= min){
			min = inp[i];
			imin = i;
		}
		else if(inp[i] >= max){
			max = inp[i];
			imax = i;
		}
	}
	
	//proses output 
	cout<<endl;
	cout<<"Bilangan Terkecil yang diinput adalah angka ke-"<<imin+1<<" dengan nilai : "<<min<<endl;
	cout<<"Bilangan Terbesar yang diinput adalah angka ke-"<<imax+1<<" dengan nilai : "<<max<<endl;
	//akhir program
	getche();
		/* Ditulis dan dirancang oleh Paksi R G*/
}
