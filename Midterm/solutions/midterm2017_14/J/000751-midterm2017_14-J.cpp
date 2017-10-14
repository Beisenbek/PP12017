#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,m;
 	cin >> n >> m;
  	
  	int a[n][m];
    int s[n],d[n];
  
    for(int i = 0; i < n; ++i){
      s[i] = 0;
      for(int j = 0; j < m; ++j){
      	cin >> a[i][j];
        s[i] = s[i] + a[i][j];
      }
      d[i] = s[i];
      //cout << s[i] << endl;
    }
  
    sort(s,s+n);
  
    for(int i = 0; i < n; ++i){
      if(d[i] == s[n-1]){
      	cout << i+1;
        break;
      }
    }

	return 0; 
}

