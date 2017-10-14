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
	for (int i = 0; i < k/2; ++i)
	{
		if (a[i]!=a[k-i-1]){
			cout << "no" ;
			return 0;
		}
	}
	cout << "yes";

	return 0;
	
}