#include  <iostream>
using namespace std;
int main(){
	string a;
	cin >> a;
	int cnt = 0;
	for (int i=0; i<=100; i++)
	{
		if (a[i] == 97  || a[i] == 101  || a[i] == 105 || a[i] == 111 || a[i] == 117)
		{
		cnt++;
		} 
	}
	cout <<cnt - 2;
	return 0;
}
