#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[700][700],c[700],b[700];
int main(){
	int s=0,l=-999999,n,m,k=0;
	cin>>n;


for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
}

for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
if(i+j-1==n)
s=s+a[i][j];	
if(i==j)
k=k+a[i][j];

}
}
cout<<s<<" "<<k;
}
