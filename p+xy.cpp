#include <iostream>
using namespace std;

main(){
	float P,X,Y,Q;
	
	cout<<"Masukkan Nilai X : ";cin>>X;
	cout<<"Masukkan Nilai Y : ";cin>>Y;
	P = X + Y;
	if(P >= 0 ){
		Q = X * Y;
	}
	else{
		Q = X / Y;
	}
	cout<<"NIlai P = "<<P<<endl<<"Nilai Q = "<<Q<<endl;
	cin.get();
}
