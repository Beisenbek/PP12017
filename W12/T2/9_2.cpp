//Standard Template Library

#include <iostream>
#include <vector>

using namespace std;


int findv(int k,vector<int>& v){

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
	
	for(int i = 0; i < 10000000; ++i){
		a.push_back(i);
	}

	cout << "start" << endl;

	int x = -1;

	if(findv(x,a) == a.size()){
		cout << "no!" << endl;
	}else{
		cout << "found!" << endl;
	}
	
	return 0;
}

