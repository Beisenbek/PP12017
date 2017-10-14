#include <iostream>
using namespace std;
int main ()
{
	int S;
	cin>>S;

	for (int i=100; i<=1000; i++)
	{
		if(S==i/100+i/10%10+i%10) 
		{
			cout<<i<<endl;
		}
	}
return 0;
}