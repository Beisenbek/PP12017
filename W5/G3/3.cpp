#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	for(int i = 1; i <= n; i = i + 1){
		if(i % 3 == 0) continue;
		cout << i << " ";
	}

	//continue;
	//break;

	return 0;	
}
