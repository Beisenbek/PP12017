#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n], brr[n-1];
	for (int i=0; i<n; i++)
	{
		arr[i]=i+1;
		if (i==n-1){
			cout << arr[i] << endl;
			break;
		}
		cout << arr[i] << " ";
		
	}
	for (int i=0; i<k-1; i++)
	{
		brr[i]=arr[i];
	}
	for (int i=k-1; i<n-1; i++)
	{
		brr[i]=arr[i+1];
	}
	for (int i=0; i<n-1; i++)
	{
		cout << brr[i] << " ";
	}
	return 0;
}
/*

*/