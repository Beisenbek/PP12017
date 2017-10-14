#include <iostream> 
#include <cmath>
using namespace std; 
int main() {

int n;
cin >> n;
int a[n];
int z = 0;
int k = 0;

for (int i = 0; i < n; i++){
	cin >> a [n];
}
//cin >>k;
for (int i = 0; i < n; i++){
	k = max(k, a[i]);
	if (k == a[i]) continue;
	 z = ++z;
		
}cout << z;
return 0;
}