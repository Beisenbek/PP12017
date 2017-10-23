#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main (){

	string s;
	int a,b;

	getline(cin,s);
	cin >> a >> b;

	int n = b - a + 1;
	char c[n];
	s.copy(c,n,a-1);
	c[n] = '\0';

	reverse(c,c+n);

	cout  << s.substr(0,a-1) << c << s.substr(b) << endl;

	return 0;
}
