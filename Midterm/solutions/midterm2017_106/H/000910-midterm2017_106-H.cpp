#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
	int n,k=-1000,j=0;
	cin>>n;
int a[n];
for(int i=0; i<n; i++){
	cin>>a[i];
}
for(int i=0; i<n; i++){
	if(a[i]>k) {
		k=a[i];
	}
}
for(int i=0; i<n; i++){
	if(a[i]==k) {
		j++;
	}
}
cout<<j;
return 0;
}