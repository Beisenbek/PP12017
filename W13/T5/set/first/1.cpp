/*
first sample for STL: vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> v;

	int n,x;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		bool found = false;
		
		for(int j = 0; j < v.size(); ++j){
			if(v[j] == x){
				found = true;
				break;
			}
		}

		if(!found){
			v.push_back(x);
		}
	}

	for(int j = 0; j < v.size(); ++j){
		cout << v[j];
		if(j < v.size() -1) cout << " ";
	}

	return 0;
}
