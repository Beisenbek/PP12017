#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,x=0,k=0;
cin >> n;
int a[n];
for (int i=0;i<n;i++) {
	cin >> a[i];}
	for ( int i=0; i<n; i++) {
	if (a[i]>=a[i+1]) k=a[i];
else k=a[i+1];}
	for ( int i=0; i<n; i++) {
		if (a[i]==k) x=x+1;}
		cout << x;


	return 0;

}