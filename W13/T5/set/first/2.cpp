
/*
second sample for STL: set
*/

#include <iostream>
#include <set>

using namespace std;

int main(){

	set<int> v;

	int n,x;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.insert(x);
	}

	set<int>::iterator it;
	int k = 0;

	for(it = v.begin(); it != v.end(); ++it){
		cout << *it;
		k++;
		if(k != v.size()){
			cout << " ";
		}
	}
	

	return 0;
}
