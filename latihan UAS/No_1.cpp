#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;
struct mhs {
	string nama, prodi, ttl, npm;
	int usia;
	char gdarah, jk;
};
void judul(string x){
	int width = 50;
	cout<<setw(width)<<setfill('=')<<""<<setfill(' ')<<"\n";
	cout<<setw((width - x.length())/ 2)<<right<<""<<x<<"\n";
	cout<<setw(width)<<setfill('=')<<""<<setfill(' ')<<"\n";
}
void inp(string x, string &z){
	cout<<setw(30)<<left<<x<<" : ";getline(cin, z);
}
void inp(string x, int &z){
	cout<<setw(30)<<left<<x<<" : ";cin>>z;
}
void inp(string x, char &z){
	cout<<setw(30)<<left<<x<<" : ";cin>>z;
}
int menu(){
	int mn;
	cout<<"1. Masukkan Data\n";
	cout<<"2. Baca dan Cari Data\n";
	cout<<"Masukkan Pilihan anda : ";
	cin>>mn;
	cin.ignore();
	return mn;
}
void mhs_in(mhs &mhs1);
void mhs_out(mhs x);
bool checkfile(string target);
bool save_file(mhs x);
void read_from_file(string x);
main(){
	mhs mhs1;
	char plh;
	int mn;
	judul("Biodata Mahasiswa");
	switch(menu()){
		case 1 : {
			system("CLS");
			judul("Input Data Mahasiswa");
			mhs_in(mhs1);
			system("CLS");
			judul("Data Terinput");
			mhs_out(mhs1);
			cout<<"Apakah Anda Ingin menyimpan data diatas? (y/n) : ";cin>>plh;
			if(toupper(plh)== 'Y'){
				if(checkfile(mhs1.npm)){
					cout<<"Data mahasiswa dengan npm : "<<mhs1.npm<<" telah ada, ingin menyimpan data terbaru? (y/n) : ";cin>>plh;
					if(toupper(plh) == 'Y'){
						if(save_file(mhs1)){
							cout<<"Data Berhasil Diupdate!";
						}
						else{
							cout<<"Error Has Occured!";
						}
					}
					else{
						cout<<"Menutup Program....";
						return 0;
					}
				}
				else{
					if(save_file(mhs1)){
						cout<<"Data Berhasil Disimpan!";
					}
					else{
						cout<<"Error Has Occured!";
					}
				}
			}
			break;
		}
		case 2 : {
			system("CLS");
			judul("Pencarian Data");
			string target;
			cout<<"Masukkan NPM yang ingin dicari : ";getline(cin, target);
			if(checkfile(target)){
				read_from_file(target);
			}
			else{
				cout<<"Data Tidak Ditemukan!";
				return 0;
			}
			break;
		}
		case 3 : {
			checkfile("123456789");
			break;
		}
	}	
	
}
void mhs_in(mhs &mhs1){
	inp("Masukkan Nama Mahasiswa",mhs1.nama);
	inp("Masukkan NPM", mhs1.npm);
	inp("Masukkan Program Studi", mhs1.prodi);
	inp("Masukkan Tempat, tanggal lahir",mhs1.ttl);
	inp("Masukkan Usia", mhs1.usia);
	inp("Masukkan Jenis Kelamin (L/P)",mhs1.jk);
	inp("Masukkan golongan darah",mhs1.gdarah);
}
void mhs_out(mhs x){
	cout<<setw(25)<<left<<"Nama"<<" : "<<x.nama<<endl;
	cout<<setw(25)<<left<<"NPM"<<" : "<<x.npm<<endl;
	cout<<setw(25)<<left<<"Prodi"<<" : "<<x.prodi<<endl;
	cout<<setw(25)<<left<<"Tempat, tanggal lahir"<<" : "<<x.ttl<<endl;
	cout<<setw(25)<<left<<"Usia"<<" : "<<x.usia<<endl;
	cout<<setw(25)<<left<<"Jenis Kelamin"<<" : ";
	if(toupper(x.jk) == 'L') cout<<"Laki-Laki";
	else cout<<"Perempuan";
	cout<<endl;
	cout<<setw(25)<<left<<"Golongan Darah"<<" : "<<x.gdarah<<endl;
}
bool checkfile(string target){
	fstream file_target("no_1_folder/"+target+".txt");
	if(file_target){
		return true;
	}
	else{
		return false;
	}
}
bool save_file(mhs x){
	string filename = "no_1_folder/" + x.npm + ".txt";
	ofstream file_target;
	string jk;
	file_target.open(filename);
	file_target<<setw(25)<<left<<"Nama"<<" : "<<x.nama<<endl;
	file_target<<setw(25)<<left<<"NPM"<<" : "<<x.npm<<endl;
	file_target<<setw(25)<<left<<"Prodi"<<" : "<<x.prodi<<endl;
	file_target<<setw(25)<<left<<"Tempat, tanggal lahir"<<" : "<<x.ttl<<endl;
	file_target<<setw(25)<<left<<"Usia"<<" : "<<x.usia<<endl;
	if(toupper(x.jk) == 'L') jk = "Laki-Laki";
	else jk = "Perempuan";
	file_target<<setw(25)<<left<<"Jenis Kelamin"<<" : "<<jk<<endl;
	file_target<<setw(25)<<left<<"Golongan Darah"<<" : "<<x.gdarah<<endl;
	file_target.close();
	
	if(file_target.good()) return true;
	else return false;
}
void read_from_file(string x){
	string filename = "no_1_folder/" + x + ".txt";
	ifstream file_target(filename);
	string line;
	while(getline(file_target, line)){
		cout<<line<<endl;
	}
}

