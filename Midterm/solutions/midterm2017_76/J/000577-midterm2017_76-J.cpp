#include <iostream>

using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	int a[n][m];
	int b[n];

	for(int i = 1;i <= n;i++){
		b[i] = 0;
		for(int j = 1;j <= m;j++){
			cin >> a[i][j];
			b[i] += a[i][j];
		}
    }
    int maxsum = b[1];
    int indi = 1;
    for(int i = 1;i <= n;i++){
    	if(maxsum < b[i]){
    		 maxsum = b[i];
             indi = i;
    	}
    }
    cout << indi;




    return 0;
	}
 

 

