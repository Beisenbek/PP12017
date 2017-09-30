#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[10];
	
	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}

	sort(a+5,a+9);

	for(int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}


	return 0;
}
