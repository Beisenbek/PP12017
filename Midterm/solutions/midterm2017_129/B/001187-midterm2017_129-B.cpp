#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int x;
	cin>>x;
	int b=100;
	for (b;b<=999;b++){
		if ((b/100+b%10+b/10%10)==x)
			cout<<b<<endl;
	}
	return 0;
}