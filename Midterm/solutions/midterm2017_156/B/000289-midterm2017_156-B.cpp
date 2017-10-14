#include <iostream>
using namespace std;

int main(){

	int s;
	cin >> s;

	for(int i=100; i<999; i++){
		if(i/100+i/10%10+i%10==s) cout << i << endl;
	}
}