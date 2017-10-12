#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n;

	cin >> n;

	bool isPrime[1001];

	isPrime[0] = isPrime[1] = false;

	for(int i = 2; i <=n; ++i){
		isPrime[i] = true;
	}

	int k = floor(sqrt(n));

	for(int i = 2; i <= k; ++i){
		if(isPrime[i]){
			int v = i + i;
			while(v <= n){
				isPrime[v] = false;
				v = v + i;	
			}
		}
	}

	/*for(int i = 2; i <=n; ++i){
		if(isPrime[i]){
			cout << i << " ";
		}
	}*/

	if(isPrime[n]){
		cout << "YES";
	}else {
		cout << "NO";
	}


	return 0;
}