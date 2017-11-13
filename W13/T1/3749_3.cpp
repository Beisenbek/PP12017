#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main(){

	int x;
	map<int,int> m;

	while(cin >> x){
		m[x]++;
	}

	cout << m.size() << endl;

	return 0;

}
/*
set:
8	OK		0.004
9	OK		0.058

map:
8	OK		0.004
9	OK		0.053

vecror:

8	OK		0.017
9	TL  	1.006
*/