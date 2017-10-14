#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main (){
	int n,j,a[10000],k=0,l;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>j;
	a[i]=j;
}

l=a[1];
for(int i=1;i<=n;i++){
	l=max(l,a[i]);
}
for(int i=1;i<=n;i++){
	if(l==a[i])
	k++;
}
cout<<k;
}

