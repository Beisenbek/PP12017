#include <vector>
#include <iostream>

using namespace std;

int main(){

	vector<int> v;

	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	cout << v.size() << endl;

	vector<int>::iterator it;

	for(it = v.begin(); it != v.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;


	return 0;
}
