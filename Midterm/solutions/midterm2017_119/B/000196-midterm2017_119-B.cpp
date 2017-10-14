#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,n1,n2,n3;
	cin>> n;
	for (int i=100;i<1000;i++){
		n1=i/100;
		n2=(i%100)/10;
		n3=(i%100)%10;
		if ((n1+n2+n3)==n){
			cout<< i<< endl;
		}
	}
	return 0;
}