#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n,a,b,c;
	cin>>n;	

	for(int i=100; i<1000; i++)	{ //123 1 2 3
		if(i/100+i%100/10+i%10==n)
			cout<<i<<endl;
	}

	return 0;
}