#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, k;

	cin >> n;
	cin >> k;
	int array[n];
	
	for(int i =1; i <= n; i++)
	{
		cin >> array[i];
	}
	
	for(int i = k; i <=n; i++)
	{
		array[i] = array[i+1];
	}
	
	for(int i = 1; i < n; i++)
	{
		cout << array[i] << " ";
	}


	return 0;
}
