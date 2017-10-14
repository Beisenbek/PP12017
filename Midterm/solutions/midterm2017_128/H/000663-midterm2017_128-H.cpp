#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin >> a[n];
	}
	int max=a[0];
	for (int i=0; i<n; i++)
	{
		if (a[i]>max)
			max=a[i];
	}
	int b=0;
	for (int i=0; i<n; i++)
	{
		if (a[i]==max)
			b++;
	}
	cout << b << endl;
	return 0;
}
/*

*/