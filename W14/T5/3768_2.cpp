#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

string lower(string str){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >='A' && str[i]<='Z'){
			str[i] = char(str[i]+32);
		}
	}
	return str;
}

int main(){

	int n;
	string str;
	map<string,set<string> > m;
	map<string,set<string> >::iterator it;
	set<string>::iterator it2;


	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> str;
		m[lower(str)].insert(str);
	}

	int error = 0;
	while(cin >> str){
		set<string> s = m[lower(str)];
		if(s.size() == 0){
			int cnt = 0;
			for(int i = 0; i < str.size(); ++i){
				if(str[i] >= 'A' && str[i] <='Z'){
					cnt++;
				}
			}
			if(cnt != 1){
				error++;
			}
		}else if(s.find(str) == s.end()){
			error++;
		}
	}

	cout << error << endl;

	/*for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << ": ";
		set<string> s = (*it).second;
		for(it2 = s.begin(); it2 != s.end(); ++it2){
			cout << (*it2) << " ";
		}
		cout << endl;
	}*/





	return 0;
}