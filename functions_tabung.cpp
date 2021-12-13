#include <iostream>
#include <iomanip>
using namespace std;

void line();
void initvalue(float& r, float& t);
void mainmenu(int& menu);
void mainprocess(int menu, float r, float t);
void interfaceluas(float r, float t);
void interfacevolume(float r, float t);
float luastabung(float r, float t);
float volumetabung(float r, float t);

float const phi = 3.14;

main(){
	int menu;
	float r, t;
	line();
	initvalue(r,t);
	mainmenu(menu);
	line();
	mainprocess(menu, r, t);
}

void line(){
	cout<<setw(40)<<setfill('=')<<"\n"<<setfill(' ');
}
void initvalue(float& r, float& t){
	cout<<"Inputkan Jari-Jari : ";cin>>r;
	cout<<"Inputkan tinggi : ";cin>>t;
}
void mainmenu(int& menu){
	cout<<"1. luas permukaan tabung"<<endl;
	cout<<"2. volume tabung"<<endl;
	cout<<"inputkan <1-2> : ";cin>>menu;
}
void mainprocess(int menu, float r, float t){
	switch(menu){
		case 1 : {
			interfaceluas(r,t);
			break;
		}
		case 2 : {
			interfacevolume(r,t);
			break;
		}
		default : {
			cout<<"Pilihan Tidak Valid!"<<endl;
			break;
		}
	}
}
void interfaceluas(float r, float t){
	cout<<"Rumus (2 * (phi * (r*r))) + (2 * phi * r * t)"<<endl;
	cout<<"Luas permukaan Tabung : "<<luastabung(r,t)<<endl;
}
float luastabung(float r, float t){
	int hasil = (2 * (phi * (r * r))) + (2 * phi * r * t);
	return hasil;
}
void interfacevolume(float r, float t){
	cout<<"Rumus phi * r * r * t"<<endl;
	cout<<"Volume tabung : "<<volumetabung(r,t)<<endl;
}
float volumetabung(float r, float t){
	int hasil = phi * r * r * t;
	return hasil;
}
