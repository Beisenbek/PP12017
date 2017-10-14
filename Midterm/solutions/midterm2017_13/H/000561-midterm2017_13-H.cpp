#include <iostream>
#include <cmath>
using namespace std;
int main(){

	freopen("input.txt","r",stdin);
	int n,k;
	cin >> n >> k;
	int j=0;
	int m=-1;
	int a[n];

	 for(int i=0; i <= n; i++){
	 		cin >> a[i];
	 	}
	 

	for(int i=0; i <= n; i++){
	 	m=max(m,a[i]);
	 	m=a[i];
	 	}

	for(int i=0; i <= n; i++){
		if(a[i]==m)
			j++;
	}
	cout << j;
	return 0;
}