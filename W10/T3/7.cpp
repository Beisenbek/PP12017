#include <iostream>

using namespace std;


int main(int n, char ** argv){

	int x;
	cin >> x;

	for(int i = 0; i < n; ++i){
		cout << argv[i] << endl;
	}

	return 0;
}