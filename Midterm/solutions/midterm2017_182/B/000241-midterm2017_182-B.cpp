#include <iostream>
using namespace std;
int main(){
	int s, d1, d2, d3;
	cin >> s;
	for (int i = 100; i < 1000; i++){
		d1 = i % 100;
		d2 = (i / 10) % 10;
		d3 = i / 100;
		if (d1 + d2 + d3 == s){
			cout << i << endl;
		}
	}
	return 0;
}