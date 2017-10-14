#include <iostream>
using namespace std;
int main ()
{
	int S;
	cin>>S;

	for (int i=100; i++;)
	{
		if(i%10+i/10%10+i/100==S)
		{
			cout<<i<<" ";
		}
	}
return 0;
}