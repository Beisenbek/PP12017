#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	int n,b,c,e;
	cin>>n;
	for (int i=100;i<=999;++i)
	{
		if ( (i%10+i/100+(i%100)/10 ) ==n)
		cout<<i<<endl;
	}
	
}
