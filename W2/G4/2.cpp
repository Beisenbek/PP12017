#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","a",stdout);


	int i,n;

	cin >> n >> i;

  	int a = (1 << 31) - 1 + (1 << 31);
  	a = a << i;

  	//bitset<32> t(a);

  	cout << (n & a) << endl;

	return 0;
}