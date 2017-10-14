#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;

	cin >> n;
	int a[n];
	int k=0;

	for (int i=0; i<n; i++) 
	{
		cin >> a[i];
	}

 int mx=a[0];
 for (int i=0; i<n; i++)
 {
 	if (mx<a[i]) 
 	{
 	  mx=a[i];
 	}

 }
 
 for (int i=0; i<n; i++) 
 {
 	if (a[i]==mx) 
 		k++;
 }
 cout << k;
  return 0;
}
