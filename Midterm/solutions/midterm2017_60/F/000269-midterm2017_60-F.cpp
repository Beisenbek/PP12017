#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[10001];
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >>a[i];
	}
	for(int i = 1;i<=n-1;i++){
		cout <<a[i]<<" ";
	}
	return 0;
}