#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	if (n==1)
		cout << "NO";
	else 
	{
		for (int i = 2; i<= n; i++)
			if (i==n/1 && i==n/n)
					cout << "YES";

	}
	else 
		cout << "NO";	


	return 0;
}