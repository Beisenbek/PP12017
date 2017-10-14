#include <iostream>

#include <cmath>



using namespace std;



int main(){
	freopen("input.txt","r",stdin);
	int n,S1,S2;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
			if(i==j){
				S1+=a[i][j];
		    }
		    else (j=n-1-i){
		    	S2+=a[i][j];
		    }

			
		}
	}
	
			cout << S1 << S2 << "\t" ;
		
		cout << endl;
	
	return 0;
}