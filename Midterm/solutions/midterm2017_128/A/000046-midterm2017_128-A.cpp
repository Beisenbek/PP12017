#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool b = true;
	for (int i=2; i<n/2; i++)
	{
		if (n%i==0)
		{
			cout << "NO" << endl;
			b=false;
			break;
		}
	}
	if (b==true)
		cout << "YES" << endl;
	return 0;
}
/*

*/