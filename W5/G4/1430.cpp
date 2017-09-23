#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	for(int i = 1; i < 1000; ++i){
		for(int j = 1; j <= i; ++j){
			cout << i << " ";
			n = n - 1;
			if(n <= 0) break;
		}
		if(n <= 0) break;
	}

	
	return 0;
}
