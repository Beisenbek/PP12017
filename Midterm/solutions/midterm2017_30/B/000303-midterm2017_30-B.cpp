#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=0;i<1000;i++){
		if(i==(a/100+a%10+((a%100)/10))) cout<<i;
	}
}