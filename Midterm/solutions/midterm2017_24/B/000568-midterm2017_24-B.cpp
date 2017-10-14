#include <iostream>

using namespace std;

int main(){

	int s,a,b,c;
	cin>>s;
	int i=1;

	for (int i=100;i<1000 && i>99;++i){
		a=i%10;
		b=i/100;
		c=i/10%10;
		if ((a + b + c) ==s)
			cout<<i<<endl;
	}
	
	return 0;
}