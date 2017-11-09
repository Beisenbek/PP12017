#include <iostream>
#include <sstream>

using namespace std;


int main(){

	string s,best;
	int k = 0;

	getline(cin,s);
	s = s + ' ';


	for(int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){
			string t = s.substr(k,i - k);
			if(t.size() > best.size()){
				best = t;
			}
			k = i + 1;
		}
	}

	cout << best << " "<< best.size() << endl; 
	

	return 0;
}