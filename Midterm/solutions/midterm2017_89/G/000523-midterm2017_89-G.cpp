#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,l,r,b=0,k=0;
cin >> n ;
cin >> l;
cin >> r;
int a[n];
for (int i=1; i<=n; i++){
	cin >> a[i];
}
for (int i=l; i<r-1; i++) {
b=a[i];
a[i]=a[r-k];
a[r-k]=b;
k=k+1;
}

for (int i=1; i<=n; i++){
	cout << a[i]; }

	return 0;
}