#include <iostream>
using namespace std;

main(){
	float j1, j2;
	int jakhir;
	const float bpulsa = 250;
	float pulsa, totbyr;
	cout<<"Masukkan waktu mulai : ";cin>>j1;
	cout<<"Masukkan waktu berakhir : ";cin>>j2;
	
	jakhir =(int(j2) * 3600 + ((j2 - int(j2))*100*60)) - (int(j1) * 3600 + ((j1 - int(j1))*100*60));
	
	pulsa = jakhir / 5;
	totbyr = pulsa * bpulsa;
	
	cout<<"Lama Waktu Percakapan = "<<jakhir/3600<<" Jam "<<(jakhir%3600)/60<<" Menit "<<jakhir%3600%60<<" Detik "<<endl; 
	cout<<"Pulsa Terpakai : "<<pulsa<<endl;
	cout<<"Total Biaya Yang Harus Dibayar : "<<totbyr;
}
