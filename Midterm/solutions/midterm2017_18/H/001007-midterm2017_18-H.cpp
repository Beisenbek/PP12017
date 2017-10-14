#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
int a[n];
for (int i=1;i<=n;i++)
cin >> a[i];
int k=-1,m=1;
for (int i=1;i<=n;i++){
if (a[i]>k)
	k=a[i];
else if (k==a[i])
	m++;

 }
 
	cout << m << endl;




	return 0;
}