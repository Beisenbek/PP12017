#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[10];
	
	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}

	cout << a[0] + a[9] <<endl;

	return 0;
}
