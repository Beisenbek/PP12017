#include<iostream>

#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[701][7001],s1=0,s2=0,d;
	cin>>n;
	for (int i=1;i<=n;++i)
	for (int j=1;j<=n;++j)
	cin>>a[i][j];
	for (int i=1;i<=n;++i){
	
	for (int j=1;j<=n;++j)
	{
		if (i==j)
		{
			s1+=a[i][j];
		}
		if ( (i+j)==n+1  )
		s2+=a[i][j];
		
	}
	
	
		}
		cout<<s1<<" "<<s2;
}
 
