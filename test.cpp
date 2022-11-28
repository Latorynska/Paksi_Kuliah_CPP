#include <iostream>
using namespace std;

main(){
	int inp1, inp2, res;
	inp1 = 24;
	inp2 = 7;
	res = inp1+=inp2-=2;
	cout<<res<<" "<<inp1<<" "<<inp2;
}
