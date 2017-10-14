#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m,n,l=0,r=-1,s=-1;
	cin >> n >> m ;
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j=0; j<m; j++){
			cin >> a[i][j];
			l+= a[i][j];
		}
		if (l>r){
			r=l;
			s=i;
		}
		l=0;
	}

	cout << s+1;

	return 0;	
}

	