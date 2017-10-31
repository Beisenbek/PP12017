#include <iostream>

using namespace std;

int main(){
	int * a = new int[n];
	for(int i = 0; i < 3; ++i){
		cin >> *(a+i);
	}

	for(int i = 0; i < 3; ++i){
		cout << *(a+i) << " ";
	}


	return 0;
}