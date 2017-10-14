#include <iostream>

using namespace std;

int main()
{
	char s[100];
	int i,k;
	
	for (i=0; i<100; i++)
	{	
		if (int(s[i])==32)
			break;
		cin>>s[i];
	}

	int a=s[0];

	if(a>=97)
		a=a-32;
	s[0]=a;
	k=i;

	for(i = 0; i<=k+1; i++)
		cout<<s[i];
	return 0;
}
