#include <iostream>
using namespace std;

main(){
	int i, x, hasil = 1;
	cout<<"masukkan factorial : ";cin>>i;
	x = i;
	while(x >= 1){
		hasil *= x;
		x--;
	}
	cout<<"angka factorial dari "<<i<<" adalah "<<hasil;
}
