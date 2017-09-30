#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[5];
	
	for(int i = 0; i < 5; ++i){
		cin >> a[i];
	}

	int k = 0;
	do{
		cout << ++k << ": ";
		for(int i = 0; i < 5; ++i){
			cout << a[i] << " ";
		}
		cout << endl;
	}while(next_permutation(a,a+5));


	return 0;
}
/*
'1 2 3'
'1 3 2'
'2 3 1'
'2 1 3'
'3 2 1'
'3 1 2'
*/
