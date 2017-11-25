#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>

#define ll long long

using namespace std;


int main(){

	freopen("input.txt","r",stdin);

	string sname,item;
	ll count;
	map<string, map<string,ll> > m;
	map<string, map<string,ll> >::iterator i;
	map<string,ll>::iterator j;
	map<string,ll> p;
	while(cin >> sname >> item >> count){
		m[sname][item]+=count;
	}

	for(i = m.begin(); i != m.end(); ++i){
		cout << (*i).first<< ":" << endl;
		p = (*i).second;
		for(j = p.begin(); j != p.end(); ++j){
			cout << (*j).first << " " << (*j).second << endl;
		}
	}

	return 0;
}