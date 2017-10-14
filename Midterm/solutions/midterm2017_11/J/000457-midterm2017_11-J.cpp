#include <iostream>
	#include <cmath>
	
	using namespace std;
	
	int main(){
	
	
		int n,m;
	
		cin >> n >> m;
	
		int a[n][m]; 
	
	
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cin >> a[i][j];
				
			}
		}
	
		
		int s[n];
	
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				s[i] +=a[i][j];
				
				}
			}
		
	
	int max=s[0];
		
		for(int i = 0; i < cnt; ++i){
			if(s[i]>max){
				max=s[i];
			}

			
		
	
	}
	cout << i;
		return 0;
		
	}

