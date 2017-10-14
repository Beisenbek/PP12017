#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s;
	int cnt;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o') 
			cnt++;
	} 
	cout << cnt;
	return 0;
}