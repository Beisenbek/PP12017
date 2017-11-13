#include <map>
#include <iostream>

using namespace std;

int main(){

	map<string, int> m;

	m["Astana"] = 1006570;	
	m["Almaty"] = 1772779;	
	m["Shymkent"] = 932415;	
	m["Uralsk"] = 233932;

	map<string,int>::iterator it;

	pair<string,int> ans;
	ans.first = "";
	ans.second = INT_MIN; 

	for(it = m.begin(); it != m.end(); ++it){
		string key = (*it).first;
		int value =(*it).second;
		if(value > ans.second){
			ans.second = value;
			ans.first = key;
		}
	}

	cout << ans.first << " " << ans.second << endl;

	return 0;

}