#include <iostream>
using namespace std;

int inputbil(int i);
int getsum(int x[], int jmlx);

void sortdata(int x[], int jmlx);
void showdata(int x[], int jmlx);

main(){
	int jml = 10;
	int bil[jml];
	
	//looping input data
	for(int i = 0; i < jml; i++){
		bil[i] = inputbil(i); // mengisi data kedalam array lewat fungsi dengan tipe data int
	}
	showdata(bil, jml);
	
}

int inputbil(int i){
	int inp;
	cout<<"Masukkan Bilangan Ke"<<i+1<<" : ";
	cin>>inp;
	return inp;
}
int getsum(int * x, int jmlx){
	int sum = 0;
	for(int i = 0; i < jmlx; i++){
		sum += x[i];
	}
	return sum;
}

void sortdata(int x[], int jmlx){
	int temp;
	for(int i = jmlx-1; i >= 0; i--){
		temp = x[0];
		for(int z = 0; z < i; z++){
			if(x[z] > x[z+1]){
				temp = x[z];
				x[z] = x[z+1];
				x[z+1] = temp;
			}
		}
	}
}

void showdata(int x[], int jmlx){
	cout<<"\nJumlah Nilai Keseluruhan : "<<getsum(x, jmlx)<<endl;
	sortdata(x,jmlx);
	cout<<"Nilai input terkecil adalah : "<<x[0]<<endl;
	cout<<"Nilai input terbesar adalah : "<<x[jmlx-1]<<endl<<endl;
	cout<<"Hasil Setelah Di sort : "<<endl;
	for(int i = 0; i < jmlx; i++){
		cout<<"Angka ke-"<<i+1<<" : "<<x[i]<<endl;
	}
}



