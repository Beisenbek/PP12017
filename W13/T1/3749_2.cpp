#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main(){

	int x;
	set<int> s;

	while(cin >> x){
		s.insert(x);
	}

	cout << s.size() << endl;

	return 0;

}