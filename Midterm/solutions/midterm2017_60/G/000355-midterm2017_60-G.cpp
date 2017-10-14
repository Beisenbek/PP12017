#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[10001], m, s;
	cin >> n>>m>>s;
	for (int i = 1; i<=n;i++){
		cin >> a[i];
	}
	for (int i = 1;i<m;i++){
		cout <<a[i]<<" ";
	}
	for (int i = s;i>=m;i--){
		cout <<a[i]<<" ";
	}
	for (int i = s+1;i<=n;i++){
		cout <<a[i]<<" ";
	}
	return 0;
}
