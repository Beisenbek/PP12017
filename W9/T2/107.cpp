#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	string s;

	getline(cin,s);
	s = s + " ";

	int k = 0;
	int len = 0;
	int index = 0;

	for(int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){
			string t = s.substr(k,i-k);
			if(len < t.size()){
				len = t.size();
				index = k;
			}

			k = i + 1;
		}
	}

	cout << s.substr(index,len) << endl;
	cout << len << endl;

	return 0;
}
