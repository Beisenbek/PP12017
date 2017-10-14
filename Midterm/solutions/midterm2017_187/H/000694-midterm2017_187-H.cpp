#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, max = 0, k =0;
	cin >> n;
	int array[n];
	
	for(int i =1; i <= n; i++)
	{
		cin >> array[i];
		if(array[i] > max) max = array[i];
	}
	
	for(int i =0; i <= n; i++)
	{
		if(array[i] == max) k++;
	}
	
	cout << k;


	return 0;
}
