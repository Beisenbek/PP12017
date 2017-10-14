#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,s=0;
	cin>>a;
b=sqrt(a);
for(int i=2;i<=b;i++){
if(a%i==0)
s++;


}
if(s==0)
cout<<"YES";
if(s!=0)
cout<<"NO";
}