#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

bool isappeared(int x,vector<int> v){
	bool res = false;

	for(int i = 0; i < v.size(); ++i){
		if(x == v[i]){
			res = true;
			break;
		}
	}

	return res;
}

int main(){

	int x;
	vector<int> v;

	while(cin >> x){
		if(!isappeared(x,v)){
			v.push_back(x);
		}
	}

	cout << v.size() << endl;

	return 0;

}