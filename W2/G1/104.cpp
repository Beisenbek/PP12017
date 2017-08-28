#include <iostream>


using namespace std;

int main(){

	char c;
	cin >> c;

	int t = int(c);
	int k = (t-96)/(abs(t-96));

	int ans = t - k * 32;

	cout << char(ans);
	
	return 0;
}

