#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, l, r;
	int k = 0;
	cin >> n >> l >> r;
	int array[n];
	int array1[n];
	
	for(int i = 1; i <= n; i++)
	{
		cin >> array[i];
		array1[i] = array[i];
	}
	
	for(int i = l; i <= r; i++)
	{	
	    array[i] = array1[r - k];
		k++;
	}
	
	for(int i = 1; i <= n; i++)
	{
		cout << array[i] << " ";
	}


	return 0;
}
