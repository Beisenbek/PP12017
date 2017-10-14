#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m,n=0,k=0;
	string a;
	cin >> a;
	for (int i=0; ;i++){
		if (a[i]<65 or a[i]>129){
			k=i;
			break;
		}
	}
	for (int i = 0; i < k; ++i)
	{
		if (a[i]==97 or a[i]==101 or a[i]==105 or a[i]==111 or a[i]==117)
			n++;
	}
	cout << n;

	return 0;
	
}