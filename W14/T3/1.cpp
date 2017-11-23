#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cmath>

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

	vector<int> v;

	for(int i = n; i>=1; --i){
		if(isPrime(i)){
			v.push_back(i);
		}
	} 

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	return 0;
}