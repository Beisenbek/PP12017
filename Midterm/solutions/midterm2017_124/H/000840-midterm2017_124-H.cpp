#include <iostream>

using namespace std;

int main()
{
	int n,b=1,ma;
	cin>>n;

	int a[n];

	for (int i=0;i<n;i++)
		cin>>a[i];

	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		{
			ma=a[i];
			if(a[i]==a[i-1])
				b++;
		}

	}

	cout<<b<<endl;


	return 0;
}
