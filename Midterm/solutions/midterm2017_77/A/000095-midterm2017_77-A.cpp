#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	bool b = true;
	if(N == 1)
		cout << "NO";
	else
	{
		for(int i = 2; i*i <= N; i++)
		{
			if(N%i==0)
				b = false;
		}
	}
	if(b)
		cout << "YES";
	else
		cout << "NO";
		
}
