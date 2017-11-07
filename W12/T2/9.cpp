//Standard Template Library

#include <iostream>
#include <vector>

using namespace std;


int findv(int k,vector<int>& v){

	cout << &v << endl;

	int res = v.size();
	for(int i = 0; i < v.size(); ++i){
		if(v[i] == k){
			res = i;
		} 
	}
	return res;
}

int main(){

	vector<int> a;
	
	for(int i = 0; i < 10; ++i){
		a.push_back(i);
	}

	cout << &a << endl;


	int x;
	cin >> x;

	if(findv(x,a) == a.size()){
		cout << "no!" << endl;
	}else{
		cout << "found!" << endl;
	}
	
	return 0;
}

