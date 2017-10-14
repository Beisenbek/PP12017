#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[N];
	int max = -1;
	int cnt = 0;
	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if(max < arr[i])
			max = arr[i];
	}
	for(int i = 0; i < N; i++)
	{
		if (arr[i] == max)
			cnt++;                  
	}
	cout << cnt;
	return 0;
}