#include <iostream>

using namespace std;

int main () {

	int n, m;

	cin >> n >> m;

	int A[n][m];
	int ms = 0;
	int index = 0;
	
	for (int i = 0; i < n; i++){
		int s = 0;
		for (int j = 0; j < m; j++){
			cin >> A[i][j];
			s = s + A[i][j];
		}
		
		if(ms < s){
			ms = s;
			index = i;
		}
	}

	cout << index;

	return 0;
}
