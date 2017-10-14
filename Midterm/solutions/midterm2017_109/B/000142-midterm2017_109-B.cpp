#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	for(int i=100 ; i<1000 ; i++){
		int first=i/100;
		int second= i/10 %10;
		int third = i%10;
		if(first+second+third==a){
			cout<<i;
		}	
	}
	
	
	
	
	return 0;
}
