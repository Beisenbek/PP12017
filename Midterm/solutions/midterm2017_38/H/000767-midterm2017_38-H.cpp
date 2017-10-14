#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long n, a[100], l=-1000000000000;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; ++i){
		l = max(a[i],l);
	}
	int k = 0;
	for(int i = 1; i <= n; ++i){
	if(a[i] == l) k = k+1;
}
	cout << k << endl;
	return 0;
}
