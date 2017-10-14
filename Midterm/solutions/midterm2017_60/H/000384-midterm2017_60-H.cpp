#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[10001], m=-100001, s=0;
	cin >> n;
	for (int i = 1; i<=n;i++){
		cin >> a[i];
		if (a[i]>m){
			m = a[i];
		}
	}
	for (int i = 1;i<=n;i++){
		if (a[i]==m){
			s++;
		}
	}
	cout <<s;
	return 0;
}
