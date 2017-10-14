#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int a[101];
	int n,maxx,s=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for (int i=0; i<n; i++) {
     if (a[i]==maxx)
     	s++;
	}
	cout << s;
	return 0;
}
