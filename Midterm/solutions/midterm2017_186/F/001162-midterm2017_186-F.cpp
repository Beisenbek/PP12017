#include <iostream>
using namespace std;
int main(){
	int i,n,k;
    cin>>n>>k;
    int a[i];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{if (a[i]==a[k])
		a[k]=a[i];

		cout<<a[i]<<' ';

	}
}