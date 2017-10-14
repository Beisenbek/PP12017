#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
    cin>>n;
    int a;
    int b;
    int c;
    if((a<b)<n && (b<c)<n  && a+b+c==n){
    	cin>>a>>b>>c;
	}
	cout<<a<<b<<c;
	return 0;
}