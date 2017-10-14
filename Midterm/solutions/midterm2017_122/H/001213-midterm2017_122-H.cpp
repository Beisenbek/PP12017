#include <iostream>

using namespace std;

int main ()
{

	int n,big=0,kol;
	cin >> n;
	int a[n];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		if (a[i] > big) {big = a[i];
	}
}
	for (int i=1;i<=n;i++){
		if (a[i] == big) {kol++;}
	}
	cout << kol;
	return 0;
}