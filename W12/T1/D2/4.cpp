#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> a;
	a.push_back(5);
	a.push_back(6);

	vector<int>::iterator it = a.begin();

	cout << *it << endl;

	it = it + 1;

	cout << *it << endl;

	return 0;
}