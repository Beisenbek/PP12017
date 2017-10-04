#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	/*int dr[4];
	dr[0] = 0;
	dr[1] = -1;
	dr[2] = 1;
	dr[3] = 0;*/

	int dr[] = {-1,0,1,0};
	int dc[] = {0,-1,0,1};

	int cnt = 1;

	int n;
	cin >> n;

	int a[2*n + 1][2*n+1];

	int r = n;
	int c = n;
	int index = 0;

	a[n][n] = 0;

	bool isFinish = false;

	int i = 0;

	while(!isFinish){
	
		i++;
	
		for(int j = 0; j < 2; ++j){
			//cout << i << " ";
			//cout << cnt++ << " ";
			for(int k = 1; k <= i; ++k){
				r = r + dr[index];
				c = c + dc[index];
				if(r < 0 || c < 0){
					isFinish = true;
					break;
				}
				a[r][c] = cnt++;
			}
			if(isFinish) break;
			index = (index + 1)%4;
		}
	}

	for(int i = 0; i < 2 * n + 1; ++i){
		for(int j = 0; j < 2 * n + 1; ++j){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}


	return 0;
}
