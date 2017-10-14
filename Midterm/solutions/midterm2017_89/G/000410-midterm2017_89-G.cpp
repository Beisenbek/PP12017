#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,l,r,x,y,b;
cin >> n ;
cin >> l;
cin >> r;
int a[n];
for (int i=1; i<=n; i++){
	cin >> a[i];
	if(abs(a[i])==l) x=i;
else if (abs(a[i]==r)) y=i;
}
b=a[x];
a[x]=a[y];
a[y]=b;
for (int i=1; i<=n; i++){
	cout << a[i];}


	return 0;
}