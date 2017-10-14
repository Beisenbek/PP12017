#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,r,l;
	cin>>n>>r>>l;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i] ;
	for(int i=0; i<n; i++){
		swap(a[r],a[l]);
		cout<<a[i];
	}
	return 0;
}