#include <iostream>

using namespace std;
int main (){

	int n, k;
	cin >> n;
	int a[n];

	for (int i = 0; i<n; i++){
		cin >> a[i];
		if (i+1 == k)
			break;
		cout << a[i] << " ";

	}

	
	return 0;
}
