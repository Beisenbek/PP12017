#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[4];

	for(int i = 0; i < 4; ++i){
		cin >> a[i];
	}

	sort(a,a+4);
	
	int k = 1;

	do{

		cout << k++ << ": ";
		for(int i = 0; i < 4; ++i){
			cout << a[i] << " ";
		}

		cout << endl;

	}while(next_permutation(a,a+4));

	return 0;
}
