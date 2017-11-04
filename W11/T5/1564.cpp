#include <iostream>

using namespace std;

int main(){

	
	int a,b;
	cin >> a >> b;

	int n = b - a + 1;
	int x[n];

	for(int i = 0; i < n; ++i){
		x[i] = (a + i)*(a + i);
	}

	for(int i = 0; i < n; ++i){
		cout << x[i]  << " ";
	}

	cout << endl;

	return 0;
}