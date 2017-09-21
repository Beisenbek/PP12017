#include <iostream>


using namespace std;

int main(){

	int x;

	cin >> x;

	int k = 0;

	for(int i = 1; i < 10; ++i){
		for(int j = 1; j <= i; ++j){
			cout << i << " ";
			k = k + 1;
			if( k == x) break;
		}

		if(k == x) break;
	}

	return 0;
}
