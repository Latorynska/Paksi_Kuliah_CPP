#include <iostream>
using namespace std;
main(){
	
	for(int i = 0; i < 4; i++){
		for(int x = 0; x <= i; x++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = 2; i >= 0; i--){
		for(int x = i; x >= 0; x--){
			cout<<"*";
		}
		cout<<endl;
	}
}
