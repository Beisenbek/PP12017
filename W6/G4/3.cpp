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

	///sort
	sort(a+1,a+n-1);//[)

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	return 0;
}