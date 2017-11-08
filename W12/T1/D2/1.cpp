#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> a;

	for(int i = 1; i<=10; ++i){
		a.push_back(i);
	}

	cout << a.size() << endl;

	a.push_back(11);
	a.push_back(12);

	cout << a.size() << endl;

	for(int i = 0; i < a.size(); ++i){
		cout << a[i] << " ";
	}

	return 0;
}