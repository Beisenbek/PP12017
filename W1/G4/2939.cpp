#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n,k;

	cin >> n >> k;

	int d = k / n;

	int r = k - d * n;

	cout << r <<endl;



	return 0;	
}