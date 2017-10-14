#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[N][N];
	int answ1 = 0, answ2 = 0;	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}
	int q = 0;
	for(int i = 0; i < N; i++)
	{
		answ1 += arr[i][q];
		q++;
	}
	q = N-1;
	for(int i = 0; i < N; i++)
	{
	//	for(int j = N-1; j >= 0; j--)
	//	{
			answ2 += arr[i][q];
		    q--;
		


	}


	cout << answ1 << '\n' << answ2;
	/*
	0 1 2

0	1 2 3
1	4 5 6 	
2	7 8 9

[0][2]
[1][1]
[2][0]

    */  
	return 0;
}