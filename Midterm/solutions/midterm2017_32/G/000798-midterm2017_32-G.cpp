#include <iostream>
#include <cmath>
using namespace std;
int main(){
int N,L,R;
cin>>N>>L>>R;
int a[N];
for(int i=1;i<=N;++i){
cin>>a[i];
if(i>=L && i<=(R+L)/2){
	swap(a[i],a[L+R-i]);
}
cout<<a[i]<<" ";
}
return 0;
}
