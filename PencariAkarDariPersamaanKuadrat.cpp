#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

main(){
	//deklarasi
	int A,B,C,D;
	float x1,x2;
	string ket;
	
	//Nama Program
	cout<<setw(60)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(55)<<"Program Pencari Akar-Akar Dari Persamaan Kuadrat"<<endl;
	cout<<setw(60)<<setfill('=')<<"\n"<<setfill(' ');
	
	//Catatan penting / guide penggunaan
	cout<<"PENTING!"<<endl;
	cout<<"Petunjuk Penggunaan : "<<endl;
	cout<<"Masukkan Nilai A,B,C dari sebuah persamaan kuadrat AX^2+BX+C"<<endl<<endl;
	
	
	//proses input
	cout<<"Masukkan Nilai A : ";cin>>A;
	cout<<"Masukkan Nilai B : ";cin>>B;
	cout<<"Masukkan Nilai C : ";cin>>C;
	
	//pencarian nilai determinan
	D = B*B - (4*A*C);
	
	//proses penghitungan berdasarkan determinan yang didapat
	if(D == 0){
		x2 = x1 = -B / 2 * A;
		ket = "Akar-Akar Ganda";
	}
	else if(D > 0 ){
		x1 = (-B + sqrt(D))/2 * A;
		x2 = (-B - sqrt(D))/2 * A;
		ket = "Akar-Akar Bilangan Riil Berbeda";
	}
	else if( D < 0){
		x1 = -B/2*A + (sqrt((4*A*C) - (B*B))/2*A);
		x2 = -B/2*A - (sqrt((4*A*C) - (B*B))/2*A);
		ket = "Akar-Akar Bilangan merupakan bilangan imajiner";
	}
	
	//output hasil dengan catatan yang diperlukan
	cout<<"\nHasilnya Adalah : "<<endl;
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
	cout<<"Catatan : "<<ket;
	
	//akhir program
	getche();
	
	/* program ini ditulis dan dikembangkan oleh Paksi Ringkang G.*/
}
