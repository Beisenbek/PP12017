#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	int n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	//sort(a,a+n);

	int k;
	cin >> k;

	int m = abs(a[0]-k);
	int ind = 0;

	for(int i = 1; i < n; ++i){
		int d = abs(a[i] - k);
		if(d <= m){
			ind = i;
			m = d;
		}
	}

	cout << a[ind];


	return 0;
}