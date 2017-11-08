#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> a;
	a.push_back(5);
	a.push_back(6);

	vector<int>::iterator it = a.begin();

	cout << *it << endl;

	*it = 7;

	cout << *it << endl;
	cout << a[0] << endl;

	return 0;
}