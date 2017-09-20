#include <iostream>

using namespace std;

int main(){

	
	for(int i = 1; i <= 6; i = i + 1){
		if(i % 2 == 1) continue;
		cout << i << " ";
	}



	return 0;
}
