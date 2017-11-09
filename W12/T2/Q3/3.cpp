#include <iostream>

using namespace std;


int main(){

	string s;
	getline(cin,s);
	int k = 0;

	s = s + char(92);

	for(int i = 0; i < s.size(); ++i){
		if(int(s[i]) == 92){
			string t = s.substr(k,i-k);
			cout << t << endl;
			k = i + 1;
		}
	}

	return 0;
}