#include <iostream>

using namespace std;

int main(){
	
	int s;
	cin >> s;

	for(int i = 100; i <= 999; ++i){
		int a = i / 100;
		int b = (i / 10)%10;
		int c = i % 10;
		if( a + b + c == s){
			cout << i << endl;
		}
	}

	return 0;
}