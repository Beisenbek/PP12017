#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    for (int i=1; i<=n;++i){
    	cin>>a[i];
    }
    reverse(a+x,a+y+1);
    for (int i=1; i<=n; ++i){
    	cout<<a[i]<<" ";
    }
 
	return 0;
}