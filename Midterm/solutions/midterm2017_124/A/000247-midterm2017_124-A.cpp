#include <iostream>

using namespace std;

int main()
{
	int n,a=1;
	cin>>n;
	for (int i=2; i<n;i++)
	{
		
		if(n%i==0)
			{
				a=0;
				break;
			}
	}

	if (a==1)
		cout<<"YES";
	else
		cout<<"NO";


	return 0;
}
