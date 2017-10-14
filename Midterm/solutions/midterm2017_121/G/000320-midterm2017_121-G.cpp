#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m,n,l,r;
	cin >> n >> l >>r;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
for (int i = 0; i <= (r-l)/2; ++i)
{
	swap (a[l+i-1], a[r-i-1]);
}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;	

	
}