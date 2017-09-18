#include <iostream>

using namespace std;

int main(){

	//break;
	//continue;

	for(int i = 1; i <= 10; ++i){
		if(i % 2 == 1) continue;
		cout << i << " " <<endl;
	}

	return 0;
}
