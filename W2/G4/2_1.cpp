#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","a",stdout);

	int i,n;

	cin >> n >> i;
	cout << ((n >> i) << i) << endl;

	return 0;
}