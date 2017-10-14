#include <cmath>
#include <iostream>
using namespace std;
int main()
int a[1001][1001];

{
int i,j,n;
int sum1=0, sum2=0;
cin>>n;
int a[n+1][n+1];
for (i=1; i<=n; i++)
	for (j=1; j<=n; j++)
	cin>>a[i][j];

for (i=1; i<=n; i++)
	{for (j=1; j<=n; j++) {
	if (i==j) sum1=sum1+a[i][j];
	if (i==n-i+1) sum2=sum+a[i][j];
	}
	}
cout<<sum1<<endl<<sum2;	 	         

return 0;

}
