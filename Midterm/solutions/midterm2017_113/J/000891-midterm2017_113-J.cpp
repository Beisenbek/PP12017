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
	sum+=a[i][j];
}
int maxi=sum; 
int s,su=0;
for(int i=0;i<n;i++){
	su=0;
	for(int j=0;j<m;j++){
		su+=a[i][j];
	}
	if(su>maxi){
		maxi=su;
      s=i;
  }
}
cout<<s+1;
	return 0;
}