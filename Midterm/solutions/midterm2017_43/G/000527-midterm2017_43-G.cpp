#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,N,L;
cin>>n >>N >>L;
int a[n];


for(int i=0; i<n;++i){
        cin>>a[i];
    }
reverse(a+N, a+L);
for(int i=0; i<n; ++i){
    cout<<a[i]<<" ";
}
return 0;
}
