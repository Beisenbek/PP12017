#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[100000];
	int k;
	cin >> k;
	for(int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		if(i == k)
			arr[i] = -1;
		
	}
	for(int i = 1; i <= N; i++)
	{
		if(arr[i] != -1)
			cout << arr[i] << " ";	
	}
	                	
	return 0;
}