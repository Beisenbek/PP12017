#include <iostream>

using namespace std;

int main(){

	for(int i = 1;i <= 10;i = i + 1){
		if(i % 2 == 1) continue;
		cout << i << endl;
	}
	
	return 0;
}
