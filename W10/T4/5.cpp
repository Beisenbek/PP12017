#include <iostream>
#include <map>

using namespace std;

int main(int n, char **v){

	cout << n << endl;
	for(int i = 0; i < n; ++i){
		cout << *(v+i) << endl;
	}

	return 0;
}