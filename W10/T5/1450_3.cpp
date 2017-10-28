#include <iostream>

using namespace std;

string x = "";

bool isPal(string s){
	bool res = true;

	for(int i = 0; i < s.size()/2; ++i){
		if(s[i] != s[s.size() - 1 - i]){
			res = false;
			break;
		}
	}

	return res;
}

void go(string s, int i, int len){
	if(len < 1) return;
	if(i > s.size()-1) return;
	string t = s.substr(i,len);
	
	if(isPal(t) && x.size() < t.size()){
		x = t;
	}

	go(s,i+1,len);
	go(s,i,len-1);
}

int main(){

	string s;
	getline(cin,s);
	go(s,0,s.size());

	cout << x << endl;

	return 0;
}
