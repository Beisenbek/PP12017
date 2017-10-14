#include <iostream>

using namespace std;
int main (){

	int n, k = 0, max = -1;
	cin >> n;
	int a[n];

	for (int i = 0; i<n; i++){
		cin >> a[i];
	}

	for (int i = 0; i<n; i++){
		if (a[i] > max) 
			a[i] = max;
	}

	for (int i = 0; i<n; i++){
         if (a[i] == max) k++;
	
}
cout << k;
	return 0;
}




