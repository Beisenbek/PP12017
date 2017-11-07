//Standard Template Library

#include <iostream>
#include <vector>

using namespace std;

bool f(int a, int b){
	if(a > b) return true;
	return false;
}

int main(){

	vector<int> a;
	
	for(int i = 0; i < 10; ++i){
		a.push_back(i);
	}

	sort(a.begin(),a.end(),f);

	for(vector<int>::iterator i = a.begin(); i != a.end(); ++i){
		cout << *i << endl;
	}

	return 0;
}

