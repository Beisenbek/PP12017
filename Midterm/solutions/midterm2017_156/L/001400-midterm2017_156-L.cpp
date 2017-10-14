#include <iostream>
using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	int a[n][m];
	int s[n];
	int max;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		s[i]=0;
		for (int j = 0; j < m; ++j)
		{
			if(a[i][j]>0) s[i]++;
		}
	}

	max=s[0];

	for (int i = 0; i < n; ++i)
	{
		if(s[i] > max) max=s[i];
	}

	int cnt = 0;

	for (int i = 0; i < n; ++i)
	{
		if(s[i]==max) cnt++;
	}

	if(cnt==n) cout << "Numbers are equal";
	if(cnt<n){
		for (int i = 0; i < n; ++i)
	{
		if(s[i]==max) cout << i+1;
	}
	}
}