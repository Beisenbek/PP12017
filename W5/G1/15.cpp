#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;

	cin >> x;

	int c = 0;

	for(int i = x - 1; (i >=1 && c < 2) ; --i){
		if(x % i == 0){
			cout << i << endl;
			c++;
		} 
	}


	return 0;
}

