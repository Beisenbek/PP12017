#include <iostream>

using namespace std;

int main()
{
	int n;
	bool prim=true;
	cin>>n;
	for (int i=2; i<n;i++)
	{
		
		if(n%i==0)
			{
				prim=false;
				break;
			}
	}

	if (prim)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


	return 0;
}
