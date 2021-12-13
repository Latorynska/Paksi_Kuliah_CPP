#include <iostream>
using namespace std;

float LPP(float l, float p);

main(){
	float l, p;
	cout<<"Inputkan Lebar : ";cin>>l;
	cout<<"Inputkan Panjang : ";cin>>p;
	cout<<"Luas Persegi Panjang : "<<LPP(l,p);
}

float LPP(float l, float p){
	return l * p;
}
