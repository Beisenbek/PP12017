#include <iostream>
using namespace std;
int main(){
 int n,i,s=0;  
 cin>>n;
 for (i=1; i<=n; i++) {
 if (n%i==0) {
 s=s+1;
 }}
 if (s>2 || n==1){cout <<"NO"; }
 else cout <<"YES";
 
 return 0;
}  