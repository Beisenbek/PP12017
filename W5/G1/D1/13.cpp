#include <iostream>

using namespace std;

int main(){

	//break;
	//continue;

	for(int i = 2; i <= 10; ++i){
		int s = 2;
		for(int j = 2; j <= i - 1; ++j){
			if(i % j == 0){
				s = s + 1;
			}	
		}

		if(s == 3){
			cout << i << endl;
			break;
		}
	}


	return 0;
}

