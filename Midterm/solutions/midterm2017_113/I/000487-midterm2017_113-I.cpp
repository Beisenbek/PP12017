#include <iostream>
using namespace std;
int main(){
	int n,s=0,s1=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
				s+=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j==n-1)
				s1+=a[i][j];
		}
	}
cout<<s<<endl<<s1;

	return 0;
}