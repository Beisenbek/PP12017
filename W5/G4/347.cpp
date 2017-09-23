#include <iostream>

using namespace std;

int main(){

	int n,x;
	bool found = false;

	cin >> n;

	for(int i = 1; i <= n; ++i){
		cin >> x;
		if( x == 0){
			cout << "YES";
			found = true;
			break;
		}
	}

	if(!found) cout << "NO";

	return 0;
}
