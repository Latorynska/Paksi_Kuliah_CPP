#include <iostream>
using namespace std;

void pangkat(int x, int y);
void out_hasil(float x);
main(){
	int base, pwr;
	cout<<"Masukkan angka : ";cin>>base;
	cout<<"Masukkan jumlah pangkat : ";cin>>pwr;
	
	pangkat(base, pwr);
}

void out_hasil(float x){
	cout<<"Hasilnya Adalah "<<x<<endl;
}
void pangkat(int x, int y){
	if(y == 0) out_hasil(1);
	else if(y > 0){
		int hasil = x;
		for(int i = 0; i < y-1; i++){
			hasil *= x;
		}
		out_hasil(hasil);
	}
	else{
		float hasil = x;
		for(int i = 0; i >= y; i--){
			hasil /= x;
		}
		out_hasil(hasil);
	}
}
