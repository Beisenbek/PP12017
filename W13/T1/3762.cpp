#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main(){

	string x;
	map<string,int> m;
	vector<string> v;

	while(cin >> x){
		if(m[x] == 0){
			v.push_back(x);
		}
		m[x]++;
	}

	int index = 0;

	for(int i = 1; i < v.size(); ++i){
		if(m[v[i]] > m[v[index]]){
			index = i;
		}else if(m[v[i]] == m[v[index]] && v[i] < v[index]){
			index = i;
		}
	}

	cout << v[index] << endl;

	return 0;

}
