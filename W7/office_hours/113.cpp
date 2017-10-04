#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
		int k = floor(sqrt(i));
		if(k *k == i) cout << i << " ";
	}

	return 0;
}
