#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

bool isPrime(int x){

	if(x == 1) return false;

	bool res = true;

	for(int i = 2; i <= sqrt(x); ++i){
		if(x % i == 0){
			res = false;
			break;
		}
	}

	return res;
}


int main(){

	int n;
	cin >> n;

	set<int> s;

	for(int i = n; i>=1; --i){
		if(isPrime(i)){
			s.insert(i);
		}
	} 

	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);

	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << endl;
	}

	

	return 0;
}