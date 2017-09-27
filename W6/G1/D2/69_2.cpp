//G,H,K,M,O
#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(int x = 0; x < n /2; ++x){
		swap(a[x],a[n-1-x]);
		//cout << x << " " << n - 1 -x << endl;		
	}
 
	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}


	return 0;
}
