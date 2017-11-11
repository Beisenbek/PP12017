#include <vector>
#include <iostream>

using namespace std;

size_t find1(vector<int> &v, int &k){
	size_t res = v.size();

	for(int i = 0; i < v.size(); ++i){
		if(v[i] == k){
			res = i;
			break;
		}
	}

	return res;
}

int main(){

	vector<int> v;

	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	int k;
	cin >> k;

	if(find1(v,k) == v.size()){
		cout << "no" << endl;
	}else{
		cout << "yes" << endl;
	}


	return 0;
}
