#include <iostream>
#include <iomanip>
using namespace std;

void judul(){
	cout<<setw(25)<<"Program Bubble Sort"<<"\n";
	cout<<setw(30)<<setfill('-')<<""<<"\n"<<setfill(' ');
}
void list_out(int x[],int jml){
	for(int i = 0; i < jml; i++) cout<<x[i]<<" ";
}
main(){
	int data[99], jml, temp, record=0;
	judul();
	cout<<"Masukkan Jumlah Array : ";cin>>jml;
	system("CLS");
	while(record < jml){
		judul();
		cout<<"\nInput List... data ke-"<<record+1<<endl;
		list_out(data, record);
		cin>>data[record];
		record++;
		system("CLS");
	}
	judul();
	cout<<"Input List ..."<<endl;
	list_out(data,jml);
	for(int x = jml - 1; x>=0; x--){
		for(int y = 0; y < x; y++){
			if(data[y] < data[y+1]) swap(data[y],data[y+1]);
		}
	}
	cout<<"\n\nList Elemen Setelah Pengurutan Descending ..."<<endl;
	list_out(data,jml);
	cout<<"\n\nJumlah Input Diterima : "<<jml;
}
