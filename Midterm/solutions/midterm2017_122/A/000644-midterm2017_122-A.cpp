#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n==1){
		cout << "NO" << endl;
		return 0;
	}
	if ((n/1==n) && (n/n==1) && (n%2!=0)) && (n%3!=0){
		cout << "YES" << endl;
	}
		else cout << "NO" << endl;
		return 0;
	}