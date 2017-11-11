#include <vector>
#include <iostream>

#define vii vector<int>::iterator 

using namespace std;

vii find(vector<int> &v, int &x){
	vii res;

	for(res = v.begin(); res != v.end(); ++res){
		if(*res == x){
			break;
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

	vii res = find(v,k);

	if(res == v.end()){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
	return 0;
}