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

	for(vector<int>::reverse_iterator i = a.rbegin(); i != a.rend(); i++){
		cout << *i << endl;
	}

	return 0;
}

