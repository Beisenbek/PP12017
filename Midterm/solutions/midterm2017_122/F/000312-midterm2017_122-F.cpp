#include <iostream>

using namespace std;

int main ()
{

	int n,b,c;
	cin >> n >> b;
	int a[n];
	for (int i=1;i<=n;i++)
	{
		cin >> c;
		a[i] = c;
	}
	for (int i=1;i<=n;i++)
	{
	if (i!=b){ cout << a[i] << " " ;}

	}
	return 0;
}