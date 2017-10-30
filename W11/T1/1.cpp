#include <iostream>

using namespace std;


int main(){
	
	/*int a[4];

	for(int i = 0; i < 4; ++i){
		cin >> a[i];
	}

	cout << a[0] << endl;
	*/

	int *b;

	for(int i = 0; i < 4; ++i){
		cin >> *(b+i);
	}

	for(int i = 0; i < 4; ++i){
		cout <<  *(b+i) << " ";
	}

	cout << "\n";

	return 0;
}