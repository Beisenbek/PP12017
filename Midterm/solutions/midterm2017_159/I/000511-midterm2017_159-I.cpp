#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int sm=0, sa=0;
    for(int i=0;i<n;++i){
    	for (int j=0;j<n;++j){
    		cin>>a[i][j];
    		if (i==j) sm+=a[i][j];
    		else if (i==n-j-1) sa+=a[i][j];
    	}
    }
    cout<<sm<<" "<<sa;

	return 0;
}