#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> prime;

bool isPrime(int x){
	if(x == 1)return false;
	bool res = true;

	for(int i = 2; i <= sqrt(x); ++i){
		if(x % i == 0){
			res = false;
			break;
		}
	}

	return res;
}

void f(int n){
	
	int k = 2;
	while(prime.size() != n){
		if(isPrime(k)){
			prime.push_back(k);
		}
		k++;
	}	
}

int main(){

	int n;

	cin >> n;

	f(n);

	for(int i = 0; i < n; ++i){
		cout << prime[i] << " ";
	}

	cout << endl;

	return 0;
}
