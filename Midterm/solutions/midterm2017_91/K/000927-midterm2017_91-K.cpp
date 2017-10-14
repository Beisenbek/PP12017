#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int a[n][m];
  int s[n];
  int k = 0;
  for(int i = 0; i < n; ++i){
  	s[i] = 0;
  	for(int j = 0; j < m; ++j){
  		cin >> a[i][j];
  		s[i] = s[i] + a[i][j];
  	}
  }
  	int mx = s[0];
for(int i = 0; i < n; ++i){
	if(s[i] > mx){
		mx = s[i];
	k = i;
	}
}
cout << mx << endl;
cout << k << endl;

return 0;
}