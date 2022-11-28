#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,Un;
	float n, SN;
	int i = 1;
	
	cout<<setw(20)<<setfill('=')<<"";
	cout<<"Kalkulator Deret Aritmatika";
	cout<<setw(20)<<setfill('=')<<"\n"<<setfill(' ');
	
	cout<<setw(24)<<left<<"Masukkan angka pertama"<<": ";cin>>a;
	cout<<setw(24)<<left<<"Masukkan angka beda"<<": ";cin>>b;
	cout<<setw(24)<<left<<"Masukkan jumlah suku"<<": ";cin>>n;
	cout<<setw(24)<<left<<"Deret"<<": ";
	
	SN = (n/2) * (2 * a + ((n-1) * b));
	while( i <= n){
		Un = a + (i - 1) * b;
		cout<<Un<<" ";
		i++;
	}
	
	cout<<endl<<setw(24)<<left<<"Sigma N"<<": "<<SN<<endl;
}
