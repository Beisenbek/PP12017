#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int * b = new int[n];

	for(int i = 0; i < n; ++i){
		cin >> *(b+ i);//b[i]
	}

	for(int i = 0; i < n; ++i){
		cout  << *(b+ i) << " ";
	}

	cout << endl;

	return 0;
}