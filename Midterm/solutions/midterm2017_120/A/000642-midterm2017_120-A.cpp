#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin>>a;
	{if(a%2==0 and a!=2)
		cout<<"NO";
		return 0;}
	{if(a%3==0 and a!=3)
		cout<<"NO";
		return 0;}
	{
		if(a%5==0 and a!=5)
		cout<<"NO";
		return 0;
	}
	{
		if(a%7==0 and a!=7)
		cout<<"NO";
		return 0;
	}
	{
		if(a==1 or a==3 or a==5 a==7 or a==11 or a==13 or a==17 or a==19)
		cout<<"YES";
		return 0;
	}
	{
		if(a>19 and a%1==0 and a%a==0 and a%2!=0 a%3!=0 and a%5!=0 and a%!7!=0 and a%11!=0 and a%13!=0 and a%17!=0 and a!%19=0)
			cout<<"YES";
		return 0;
	}
	return 0;
}