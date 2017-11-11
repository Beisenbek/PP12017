#include <vector>
#include <iostream>
#define vii vector<int>::iterator



using namespace std;

vii find2(vector<int> &v, int &k){
	vii res;

	for(res = v.begin(); res != v.end(); ++res){
		if(*res == k) break;
	}

	return res;
}

int main(){

	vector<int> v;

	for(int i = 1; i <= 10; ++i){
		v.push_back(i);
	}

	int k;
	cin >> k;

	if(find2(v,k) == v.end()){
		cout << "no" << endl;
	}else{
		cout << "yes" << endl;
	}


	return 0;
}
