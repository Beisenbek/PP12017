#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("input.txt", "r", stdin);
	int N, M;
	cin >> N >> M;
	int arr[N+100][M+100];
	int sum[N+100];
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
			sum[i] += arr[i][j];
		}
	}
	int max = -1;
	int answ;
	for(int i = 1; i <= N; i++)
	{
		if(max < sum[i])
		{
			max = sum[i];			
		}
	}
	for(int i = 1; i <= N; i++)
	{
		if(sum[i] == max)
		{
			 cout << i;
			 return 0; 
		}	

	}

	//cout << answ;
	return 0;
}