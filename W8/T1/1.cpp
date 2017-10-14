#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	/*
	right 0,1
	down  1,0
	left  0,-1
	up	  -1,0
	*/

	int n;
	cin >> n;

	
	int a[n][n];
	int d[n];

	int q = n - 1;
	d[0] = q;

	for(int i = 1; i <= n - 2; i = i + 2){
		d[i] = d[i+1] = q;
		q -= 2;
	}


	
	int dr[] = {0,1,0,-1};
	int dc[] = {1,0,-1,0};
	int r = 0,c = 0;
	int index = 0;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			a[i][j] = 0;
		}
	}

	a[0][0] = 1;

	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= d[i]; ++j){
			r = r + dr[index];
			c = c + dc[index];
			a[r][c] = 1;
		}
		index++;
		if(index >=4){
			index = 0;
		}
	}  

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j];
		}
		cout << endl;
	}

		

	return 0;
}
