#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
int n,m;
cin>>n >>m;
int a[n];


for(int i=1; i<n;++i){
        cin>>a[i];
    }

for(int i=1; i<n; ++i){
    if(m == i)
    	a[i] - m;
    cout<<a[i]<<" ";
}
return 0;
}
