#include<iostream>
#include<string>
#include <cctype>
using namespace std;


int main(){

int n;
int n1,n2,n3,i;
cin>>n;
for ( i=100; i<=999; i++) {
	n1=i/100;
	n2=i%10;
	n3=(i/10)%10;
	int sum=n1+n2+n3;
	if (sum==n) { cout<<i<<endl;
	}

}
return 0;

}

