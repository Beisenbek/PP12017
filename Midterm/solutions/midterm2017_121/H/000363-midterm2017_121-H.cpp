#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m=0,n,l=0,r;
	cin >> n ;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i]>m)
			m=a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i]==m)
			l++;
	}
	cout << l;

	return 0;	

	
}