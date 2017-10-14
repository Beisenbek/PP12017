#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;

	cin >> n;
	int a[n][n];

for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];}}

cout << a[2][0] << " " << a[1][0] << " " << a[0][0] << endl;
cout << a[2][1] << " " << a[1][1] << " " << a[0][1] << endl;
cout << a[2][2] << " " << a[1][2] << " " << a[0][2] << endl;
	return 0;
}
