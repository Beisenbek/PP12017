#include <iostream>
using namespace std;
int main(){
	int n,i,maxi=0;
    cin>>n;
    int a[i];
    for(i=0;i<n;i++){
    	cin>>a[i];
    }
    maxi=a[i];
    for(i=0;i<n;i++)
    	maxi=max(a[i],maxi);
    cout<<maxi;

	return 0;
}