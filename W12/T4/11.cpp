#include <vector>
#include <iostream>

using namespace std;

size_t find(vector<int> &v, int &x){
	size_t res = v.size();

	for(int i = 0; i < v.size(); ++i){
		if(v[i] == x){
			res = i;
		}
	}

	return res;
}

int main(){

	vector<int> v;
	int x;

	for(int i = 0; i < 5; ++i){
		cin >> x;
		v.push_back(x);
	}

	int k;
	cin >> k;

	size_t res = find(v,k);


	if(res == v.size()){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
	
	return 0;
}