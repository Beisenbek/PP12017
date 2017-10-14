#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int sum=0;
for(int j=0;j<m;j++){
	int i=0;
	if(a[i][j]>0)
	sum++;
}

int maxi=sum; 
int s,g=0,su=0;
for(int i=0;i<n;i++){
	su=0;
	for(int j=0;j<m;j++){
		if(a[i][j]>0)
		su++;
	}
	if(su>maxi){
		maxi=su;
      s=i;  
  }
  
}
for(int i=0;i<n;i++){
	su=0;
	for(int j=0;j<m;j++){
		if(a[i][j]>0)
		su++;
	}
	if(su==maxi)
		g++;
}
if(g==n)
	cout<<"Numbers are equal";
else cout<<s+1;
	return 0;
}