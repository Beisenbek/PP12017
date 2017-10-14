#include <iostream>
using namespace std;
int main(){
	int n, m, max, k;
	cin >> n >> m;
	int a[n][m], s[n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		s[i] = 0;
	}
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < m; j++){
	    	s[i] += a[i][j];
	    }
    }

    max = s[0];
    for (int i = 1; i < n; i++){
    	if (s[i] > max){
    		max = s[i];
    		k = i;
    	}
    }
    cout << k;
    return 0;
}

