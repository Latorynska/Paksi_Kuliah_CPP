#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

//function perhitungan nilai
int calcD(int a, int b, int c){
	return b*b - (4*a*c);
}
float DNol(int a, int b, string &x){
	x = "Akar-Akar Ganda";
	return -b / 2 * a;
}
string DPos(int a, int b, int d, float &x1, float &x2){
	x1 = (-b + sqrt(d))/2 * a;
	x2 = (-b - sqrt(d))/2 * a;
	return "Akar-Akar Bilangan Riil Berbeda";
}
string DNeg(){
	return "Akar-Akar Bilangan merupakan bilangan imajiner";
}

//prosedur
void progname(){
	cout<<setw(60)<<setfill('=')<<"\n"<<setfill(' ');
	cout<<setw(55)<<"Program Pencari Akar-Akar Dari Persamaan Kuadrat"<<endl;
	cout<<setw(60)<<setfill('=')<<"\n"<<setfill(' ');
}
void guide(){
	cout<<"PENTING!"<<endl;
	cout<<"Petunjuk Penggunaan : "<<endl;
	cout<<"Masukkan Nilai A,B,C dari sebuah persamaan kuadrat AX^2+BX+C"<<endl<<endl;
}
void input(int &x, char nilai){
	cout<<"Masukkan Nilai "<<nilai<<" : ";cin>>x;
}

main(){
	//deklarasi
	int A,B,C,D;
	float x1,x2;
	string ket;
	
	//Nama Program
	progname();
	
	//Catatan penting / guide penggunaan
	guide();
	
	
	//proses input
	input(A, 'A');
	input(B, 'B');
	input(C, 'C');
	
	//pencarian nilai determinan
	D = calcD(A,B,C);
	
	//proses penghitungan berdasarkan determinan yang didapat
	if(D == 0){
		x2 = x1 = DNol(A,B,ket);
	}
	else if(D > 0 ){
		ket = DPos(A,B,D,x1,x2);
	}
	else if( D < 0){
		ket = DNeg();
	}
	
	//output hasil dengan catatan yang diperlukan
	cout<<"\nHasilnya Adalah : "<<endl;
	if( D >= 0){
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
	}
	cout<<"Catatan : "<<ket;
	
	//akhir program
	getche();
	
	/* program ini ditulis dan dikembangkan oleh Paksi Ringkang G.*/
}
