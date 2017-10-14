#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[101][101], m=-100001, s=0, c, cnt = 0;
	cin >> n>>c;
	for (int i = 1; i<=n;i++){
		for (int j = 1;j<=c;j++){
			cin >>a[i][j];
			s = s+a[i][j];
		}
		if (s > m){
			m = s;
			cnt  = i;
		}
		s = 0;
	}
	cout <<cnt;
	return 0;
}
