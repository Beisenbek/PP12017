#include <iostream>

using namespace std;

int main(){
        int n,m,k;
	cin >> n >> m >> k;
	int a[n];
	m--; k--;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}

	for(int i = 0;i < m; i++){
		cout << a[i] << " ";
	}

	for(int i = k;i >= m;i--){
                cout << a[i] << " ";
	}

	for(int i = k + 1; i < n; i++){
		cout << a[i] << " ";
	}
  	return 0;
}