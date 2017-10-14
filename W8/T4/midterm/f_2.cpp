#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    int a[n];

	for(int i = 0; i < n; ++i){
        cin >> a[i];
	}

	k--;

	//[0,k-1],k,[k+1,n-1]

	for(int i = 0; i <= k - 1; ++i)
	    cout << a[i] << " ";

	for(int i = k + 1; i < n; ++i)
	    cout << a[i] << " ";

  	return 0;
}