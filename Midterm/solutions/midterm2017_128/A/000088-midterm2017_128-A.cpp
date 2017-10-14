#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool b = true;
	for (int i=2; i<n; i++)
	{
		if (n%i==0)
		{
			cout << "NO" << endl;
			b=false;
			break;
		}
	}
	if (b==true && n!=1)
		cout << "YES" << endl;
	if (n==1)
		cout << "NO" << endl;
	return 0;
}
/*

*/