#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	int a[n];

	
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int k = 0;

	for(int i = 1; i < n - 1; ++i){
		if(a[i] > a[i-1] && a[i] > a[i+1]) k = k +1;
	}

	cout << k << endl;


	return 0;
}
