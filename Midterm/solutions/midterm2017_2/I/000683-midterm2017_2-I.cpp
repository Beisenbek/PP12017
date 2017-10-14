#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];
	int S1=0;
	int S2=0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
			if(i==j){
				S1 += a[i][j];
		    }
		    else if (j==n-1-i){
		    	S2 += a[i][j];
		    }
		}
	}
	
			cout << S1 << S2 << "\t" ;
		
		cout << endl;
	
	return 0;
}