#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, L, R;
	cin >> N >> L >> R;
	int arr[N];
	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	// L = 2;
	// cnt = 2;
	// R = 4;
	//swap([1], [3])
	//swap([2], [2])	               
	
	int cnt = R - L;
	for(int i = 0; i <= cnt/2; i++)
	{
		swap(arr[L-1+i], arr[R-1-i]);
	}
		
	for(int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	} 
	// 1 2 3 4 
	// 4 3 2 1
	/*swap([0],[3]);
	swap([1],[2]);
	swap[    */


}