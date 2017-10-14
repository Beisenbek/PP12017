#include <iostream>

using namespace std;

int main ()
{
	int n,b,c,e;
	int arr[4];
	cin >> n >> b >> c;
	int a[n];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	arr[1]=a[b];
	arr[2]=a[c];
	a[b]=arr[2];
		a[c]=arr[1];
	for (int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
	return 0;
}