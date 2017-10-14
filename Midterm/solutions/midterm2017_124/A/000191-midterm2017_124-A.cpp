#include <iostream>

using namespace std;

int main()
{
	int n,a;
	bool prim=true;
	cin>>n;
	for (int i=2; i<n;i++)
	{
		a=n%i;
		if(a==0)
			{
				prim=false;
				break;
			}
	}

	if (prim||n==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


	return 0;
}
