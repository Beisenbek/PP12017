#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	long long int a[1111],n,i,q=1;
	cin>>n;
	
	for (int i = 1; i <=n; i++) {
		cin >> a[i];
	}
	
    sort (a+1, a+n+1);
    for (int i=1;i<=n-1;i++){
    	if (a[i]!=a[i+1])q++;
	}
	
	cout<<q;
	
	return 0;
}
