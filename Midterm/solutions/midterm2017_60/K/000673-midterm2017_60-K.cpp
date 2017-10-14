#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int b[101], n, a[101][101], m=-100001, s=0, c, cnt = 0, z = 0;
	cin >> n;
	for (int i = 1; i<=n;i++){
		for (int j = 1;j<=n;j++){
			cin >>a[i][j];
			}
		}
	for (int i = 1;i<=n;i++){
		for (int j = n;j>=1;j--){
			cout <<a[j][i]<<" ";		
		}
		cout <<endl;
	}
		
	return 0;
}
