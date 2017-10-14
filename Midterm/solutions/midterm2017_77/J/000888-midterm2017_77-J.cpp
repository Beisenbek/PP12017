#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int arr[N][M];
	int sum[N];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			sum[i] += arr[i][j];
		}
	}
	int max = -1;
	int answ;
	for(int i = 0; i < N; i++)
	{
		if(max < sum[i])
		{
			max = sum[i];
			answ = i; 
		}
	}
	cout << answ;
	return 0;
}