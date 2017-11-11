`#include <iostream>
#include <algorithm>

using namespace std;


int f(string t, string s){

	int cnt = 0;

	for(int i = 0; i <= t.size() - s.size(); ++i){
		if(t.substr(i,s.size()) == s){
			cnt++;
		}
	}

	return cnt;
}

int main(){

	string word,part;
	int cnt = 0;

	cin >> word;

	while(cin >> part){
		cnt += f(part,word);
	}

	cout << cnt << endl;

	return 0;
}