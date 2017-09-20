#include <iostream>

using namespace std;

int main(){

	int a,b;
	int c = 0;
	
	cin >> a >> b;

	for(int i = a; i <= b; i = i + 1){
		if(i % 2 == 1) continue;
		c = c + 1;
		cout << i << " ";
		if(c >= 3) break;
	}



	return 0;
}
