#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int n;
	int a[1000];
	int k;
	int maxi=0;
	cin>>n;
	for (int i = 0; i<n;i++){
		cin>>a[i];
	}
	for( int i=0;i < n;i++){
		maxi=max(a[i],maxi);
		if (a[i]==maxi)
			k++;
	}
	cout<<k;
	return 0;
}