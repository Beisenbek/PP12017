#include <vector>
#include <iostream>

using namespace std;

int main(){

	vector<int> v;

	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	cout << v.size() << endl;

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}
