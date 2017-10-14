#include <iostream>
using namespace std;
int main ()
{
	int S;
	cin>>S;

	for (int i=100; i++;) 
	{
		if (i/100+i/10%10+i%100==S) 
		{
			cout<<i<<endl;
		}
	}
return 0;
}