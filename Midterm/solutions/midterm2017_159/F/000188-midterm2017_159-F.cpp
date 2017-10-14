#include <iostream>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	int b[n-1];
	for(int i=0;i<n;++i){
		cin>>a[i];
		}
	for(int i=0;i<n-1;++i){
	if (i>=d-1) b[i]=a[i+1];
	else b[i]=a[i];
   cout<<b[i]<<" ";
	}
		

	return 0;
}