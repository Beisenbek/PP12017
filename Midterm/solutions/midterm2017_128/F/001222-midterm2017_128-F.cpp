#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for (int i=0; i<n; i++)
	{
		arr[i]=i+1;
		
		cout << arr[i] << " ";
		
	}
	for (int i=0; i<k-1; i++)
		cout << arr[i] << " ";
	for (int i=k; i<n; i++)
		cout << arr[i] << " ";
	return 0;
}

/*

*/