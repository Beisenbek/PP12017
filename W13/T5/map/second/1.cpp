#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,int> m;

	string word;
	int cnt;

	cin >> word;

	while(word != "end"){
		cin >> cnt;
		m[word] += cnt;
		cin >> word;
	}

	map<string,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
