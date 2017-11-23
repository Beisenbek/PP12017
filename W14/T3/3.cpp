#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <map>

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

	map<int,bool> m;

	for(int i = n; i>=1; --i){
		if(isPrime(i)){
			m[i] = true;
		}
	} 

	map<int,bool>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}