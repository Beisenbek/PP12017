#include <iostream>
using namespace std;
int main(){

	int n,l,r;
	cin>>n>>l>>r;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<l;i++)
		cout<<a[i]<<" ";
	for(int i=r-1;i>l-1;i--)
		cout<<a[i]<<" ";
	for(int i=n-1;i>r-1;i--)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}