#include <iostream>
#include <map>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	map<string,int> m;
	map<string,int>::iterator it;

	string str;
	int count;

	cin >> str;

	while(str != "end"){
		cin >> count;
		m[str] += count;
		cin >> str;
	}

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
