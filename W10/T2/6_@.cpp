#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool f(int r, int l,string s){
	if(r >= l) return true;	
	if(s[r] == s[l]){
		return f(r + 1, l - 1,s);
	}
	return false;
}

string beatify(string x){
	string res = "";

	for(int i = 0; i < x.size(); ++i){
		if(x[i] != ' '){
			res = res + x[i];
		}
	}

	return res;
}

int main (){
	
	string s;
	getline(cin,s);

	s = beatify(s);

	if(f(0,s.size()-1,s)){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}

	return 0;
}
