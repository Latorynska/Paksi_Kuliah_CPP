#include <iostream>
using namespace std;

main(){
	int x = 35;
	
	int *ptr1, *ptr2;
	
	ptr1 = &x;
	
	cout<<"alamat didalam ptr1 : "<<ptr1<<", dengan nilai : "<<*ptr1<<endl;
	
	ptr2 = ptr1; //menyalin alamat yang berada didalam ptr1 ke ptr2
	
	cout<<"Alamat didalam ptr2 : "<<ptr2<<", dengan nilai : "<<*ptr2<<endl;
}
