#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[10];
	
	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}

	reverse(a,a+10);

	for(int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}


	return 0;
}

'1 2 3'
'1 3 2'
'2 3 1'
'2 1 3'
'3 2 1'
'3 1 2'
