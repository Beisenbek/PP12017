#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m,n,l=0,r=-1, k=-1;
	cin >> n >> m ;
	int a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j=0; j<m; j++){
			cin >> a[i][j];
			if (a[i][j]>0)
				l++;
		}
		if (l>=r)
			r=l;
		l=0;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j=0; j<m; j++){
			if (a[i][j]>0)
				l++;
		}
		if (l==r){
			if(k>=0){
				cout << "Numbers are equal";
				return 0;
			}
			k=i;
		}
		l=0;
	}
	cout << k+1;

	return 0;	
}

	