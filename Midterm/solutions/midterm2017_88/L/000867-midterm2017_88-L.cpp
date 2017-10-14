#include <iostream>

using namespace std;

int main () {

freopen("input.txt", "r", stdin);

	int n, m;

	cin >> n >> m;

	int A[n][m];
	int ms = 0;
	int k = 0;

	for (int i = 0; i < n; i++){
		int s = 0;
		for (int j = 0; j < m; j++){
			cin >> A[i][j];
			s = s + A[i][j];
		}
		
		if(ms < s){
			ms = s;
			k++;
		}
	}
	if (k > 1)
	cout << "Numbers are equal";
	else
	cout << ms;

	return 0;
}
