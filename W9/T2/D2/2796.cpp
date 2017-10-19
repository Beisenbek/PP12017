#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

//count of same consequence chars from position i
int f1(string x, int i){
	int j = i + 1;

	while(x[i] == x[j]){
		j++;
	}	

	return j - i;
}

//combine integer and char into one string
string f2(int cnt, char c, string ans){

	stringstream ss;
	string g;
	ss << cnt;
	ss >> g;
	ans = ans + g + c;

	return ans;
}

int main(){

	freopen("input.txt","r",stdin);

	string x;
	int n;

	cin >> x >> n;

	string t = x;

	for(int r = 1; r <= n - 1; ++r){
		t = "";
		for(int i = 0; i < x.size(); ++i){
			int h = f1(x,i);
			t = f2(h,x[i],t);
			i = i + h - 1;
		}
		x = t;
	}

	cout << t << endl;


	return 0;
}