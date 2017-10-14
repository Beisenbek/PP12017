#include <iostream>

using namespace std;

int main()
{
	int s;
	cin>>s;

	for(int a=1;a<10;a++)
	{
		for(int b=0;b<10;b++)
		{
			for(int c=0; c<10; c++)
				if(a+b+c==s)
					cout<<a<<b<<c<<endl;
		}
	}


	return 0;
}
