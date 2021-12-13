#include <iostream>
using namespace std;

main(){
	int jml = 2;
	int matriks[jml][99][99]; //dimensi pertama dideklarasikan dengan asumsi hitungan dimulai dari 1 untuk menghindari error out of boundaries
	
	for(int a = 0; a < jml; a++){
		cout<<"Matriks ke "<<a+1<<endl;
		//setiap nilai input banyak kolom / baris dimasukkan sebagai nilai awal dari jenis tsb
		//a[matriks ke-][0 = baris, 1 = kolom][0] akan menampung nilai banyaknya baris/kolom 
		cout<<"masukkan angka untuk baris = ";cin>>matriks[a][0][0];//masukkan banyak baris, dan masukkan sebagai nilai ke 0 dari baris
		cout<<"masukkan angka untuk kolom = ";cin>>matriks[a][1][0];//masukkan banyak kolom, dan masukkan sebagai nilai ke 0 dari kolom
		
		for(int i = 0; i < matriks[a][0][0]; i++){ //array matirks[a][0][0] menampung nilai banyaknya baris berdasarkan nilai yang diinput oleh user
			for(int x = 1; x <= matriks[a][1][0]; x++){ //array matirks[a][1][0] menampung nilai banyaknya baris berdasarkan nilai yang diinput oleh user
				cout<<"masukkan angka : ";cin>>matriks[a][i][x];//input angka untuk tiap diisi ke dalam array
			}
		}
		cout<<endl;
	}
	for(int a = 0; a < jml; a++){
		for(int i = 0; i < matriks[a][0][0]; i++){ //array matirks[a][0][0] menampung nilai banyaknya baris berdasarkan nilai yang diinput oleh user
			for(int x = 1; x <= matriks[a][1][0]; x++){ //array matirks[a][1][0] menampung nilai banyaknya kolom berdasarkan nilai yang diinput oleh user
				cout<<matriks[a][i][x]<<" ";//proses output nilai-nilai dari array yang sudah dimasukkan
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
