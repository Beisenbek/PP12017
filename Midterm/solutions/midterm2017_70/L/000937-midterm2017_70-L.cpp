#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,m;
	cin >> n>>m;

	int a[n][m];

	int s=0;

    for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			if(a[i][j]>0){
				s++;
			}
        }
    }

    cout<< s <<endl ;				

 
	

  return 0;
}




