#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n,b,c;
cin >> n >> b >> c;
int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	reverse(a+b-1,a+c);
	

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}