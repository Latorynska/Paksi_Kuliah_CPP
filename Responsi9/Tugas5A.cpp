#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

//function dibawah adalah proses perhitungan
int tambah(float x, float y){
	return x+y;
}
int kurang(float x, float y){
	return x - y;
}
int kali(float x, float y){
	return x * y;
}
int bagi(float x, float y){
	return x / y;
}

//function dibawah untuk input angka
float OptInp(string x){
	float a;
	cout<<"Masukkan Bilangan "<<x<<" : ";cin>>a;
	return a;
}

//function dibawah untuk menampilkan menu sekaligus input opsi menu
char mainmenu(){
	char plhn;
	string mn[] = {"Penambahan", "Pengurangan", "Perkalian", "Pembagian", "Selesai"};
	cout<<"\nOperasi\n";
	cout<<setw(10)<<setfill('-')<<"\n"<<setfill(' ');
	for(char x = 'a' ; x <= 'e'; x++){
		cout<<'['<<x<<"] "<<mn[x-97]<<endl; //97 adalah nilai a jika diubah kedalam int
	}
	cout<<"\nPilihan Anda [a..e] ? ";
	cin>>plhn;
	return plhn;
}

//prosedur dibawah adalah untuk pengoperasian
void pertambahan(float x, float y){
	cout<<"Hasil pertambahan dari "<<x<<" dan "<<y<<" adalah "<<tambah(x,y)<<endl;
}
void pengurangan(float x, float y){
	cout<<"Hasil pengurangan dari "<<x<<" dan "<<y<<" adalah "<<kurang(x,y)<<endl;
}
void perkalian(float x, float y){
	cout<<"Hasil perkalian dari "<<x<<" dan "<<y<<" adalah "<<kali(x,y)<<endl;
}
void pembagian(float x, float y){
	cout<<"Hasil pembagian dari "<<x<<" dan "<<y<<" adalah "<<bagi(x,y)<<endl;
}

main(){
	char repeat = 'y';
	do{
		system("CLS");
		float x = OptInp("pertama");
		float y = OptInp("ke dua");
		switch(mainmenu()){
			case 'a' : {
				pertambahan(x,y);
				break;
			}
			case 'b' : {
				pengurangan(x,y);
				break;
			}
			case 'c' : {
				perkalian(x,y);
				break;
			}
			case 'd' : {
				pembagian(x,y);
				break;
			}
			case 'e' : {
				system("CLS");
				cout<<"\nTerima Kasih! ^_^"<<endl;
				break;
			}
			default : {
				cout<<"\nPilihan Tidak Valid!\n";
				getche();
				break;
			}
		}
		cout<<"\nUlangi Program? (y/n) : ";cin>>repeat;
	} while(repeat == 'y' || repeat == 'Y');
}
