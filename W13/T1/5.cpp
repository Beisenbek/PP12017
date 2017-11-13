#include <map>
#include <iostream>

using namespace std;

int main(){

	map<string, int> m;

	m["Astana"] = 1006570;	
	m["Almaty"] = 1772779;	
	m["Shymkent"] = 932415;	
	m["Uralsk"] = 233932;

	map<string,int>::iterator it = m.begin();
	pair<string,int> ans = *m.begin();

	do{
		if((*it).second > ans.second){
			ans = *it;
		}
	}while(++it != m.end());

	cout << ans.first << " " << ans.second << endl;

	return 0;

}