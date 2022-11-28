#include <iostream>
using namespace std;

main(){
	char stsplg;
	int lmbr, hrg, totbyr;
	
	cout<<"Masukkan Status Langganan (y/n) : "; cin>>stsplg;
	cout<<"Masukkan Jumlah Lembar Fotokopi : ";cin>>lmbr;
	
	if(stsplg == 'y' || stsplg == 'Y'){
		hrg = 75;
	}
	else{
		if(lmbr >= 100){
			hrg = 85;
		}
		else{
			hrg = 100;
		}
	}
	totbyr = hrg * lmbr;
	
	cout<<"Total Yang Harus Dibayar : Rp."<<totbyr<<endl;
	cin.get();
}
