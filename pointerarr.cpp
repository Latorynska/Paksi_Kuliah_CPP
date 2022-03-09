#include <iostream>
using namespace std;

main(){
	int a[] = {10,20,30,40,50};
	int *ptr = a;
	
	for(int i = 0; i < 5; i++) cout<<ptr[i]<<" ";
	
}
