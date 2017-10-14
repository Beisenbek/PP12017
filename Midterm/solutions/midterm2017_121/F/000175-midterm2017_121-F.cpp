#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m,n,k;
	cin >> n >> k;
	int a[n-1];
	for (int i=0; i<k-1; ++i)
	{
		cin >> a[i];
		}
	cin >> m;

	for (int i=k-1; i<n-1; ++i)
		cin >> a[i];
	for (int i = 0; i < n-1; ++i)
	{
		cout << a[i] << " ";
	}
	



	return 0;	

	
}