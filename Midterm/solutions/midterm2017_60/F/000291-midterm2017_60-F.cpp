#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[10001], m;
	cin >> n>>m;
	for (int i = 1; i<=n;i++){
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++){
		if (i == m){
			continue;
		}
		cout <<a[i]<<" ";
	}
	return 0;
}
