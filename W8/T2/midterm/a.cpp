#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;

	int k = 0;

	for(int i = 1; i <= n; ++i){
		if(n%i==0){
			k = k + 1;
		}
	}

	if(k > 2 || k == 1){
		cout << "NO";
	}else{
		cout << "YES";
	}

	return 0;
}