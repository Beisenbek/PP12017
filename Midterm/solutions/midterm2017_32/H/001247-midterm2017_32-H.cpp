#include <iostream>
#include <cmath>
using namespace std;
int main(){
int N,sum=0;
cin>>N;
int a[N];
for(int i=1;i<=N;++i){
cin>>a[i];
int D=max(a[N]);
if(a[i]=D){
	sum++;
}	
}
cout<<sum;

return 0;
}
