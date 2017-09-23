#include <iostream>

using namespace std;

int main(){

	int n,i = 1;

	cin >> n;

	for(;;){
		cout << i << " ";
		i = i + 1;
		if(i > n) break;
	}

	//continue;
	//break;

	return 0;	
}
