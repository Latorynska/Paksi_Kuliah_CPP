#include <iostream>
using namespace std;

main(){
	int jml;
	
	cout<<"Masukkan banyaknya data yang akan diinput : ";cin>>jml;
	
	int a[jml];
	
	for(int i = 0; i < jml; i++){
		cout<<"Masukkan nilai pada indeks ke-"<<i<<" : ";cin>>a[i];
	}
	
	//sorting insertion sort
	for ( int i = 1; i < jml; i ++){
		int tmp = a[i];
		int j = i - 1;
		while(j >= 0 && tmp >= a[j]){
			a[j+1] = a[j];
			j -= 1;
		}
		a[j+1] = tmp;
	}
	
	
	for(int i = 0; i < jml; i++) cout<<a[i]<<" ";
}
