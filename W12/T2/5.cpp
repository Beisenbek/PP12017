//Standard Template Library

#include <iostream>
#include <vector>

using namespace std;


int main(){

	vector<int> a;
	
	for(int i = 0; i < 10; ++i){
		a.push_back(i);
	}

	a.erase(a.end()-1);

	for(vector<int>::iterator i = a.begin(); i != a.end(); ++i){
		cout << *i << endl;
	}

	return 0;
}

