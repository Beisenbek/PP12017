#include <iostream>
#include <bits/basic_string.h>
using namespace std;

int main(){

	string s;

	cin >> s;
int count=0;
	for(int i = 0; i < s.length(); i++){
		int code = (int) s[i];
		if(code ==97 || code ==101 || code ==105|| code ==111|| code ==117)
			count++;
		
	}
	cout<<count;

	return 0;
}
