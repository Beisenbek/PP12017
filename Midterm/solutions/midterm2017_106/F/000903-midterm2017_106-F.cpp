#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
	int n,k;
	cin>>n>>k;
int a[n];
for(int i=0; i<n; i++){
	cin>>a[i];
}
for(int i=0; i<n; i++){
	if(i+1!=k) {
		cout<<a[i]<<" ";
	}
}
return 0;
}