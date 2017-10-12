#include <iostream>

using namespace std;

int main(){
	
	int n;

	cin >> n;

	if(n == 1) cout << "NO";
	else{

		bool found = false;

		int t = floor(sqrt(n));

		for(int i = 2; i <= t; ++i){
			if(n % i == 0){
				found = true;
				break;
			}
		}

		if(found){
			cout << "NO";
		}else{
			cout << "YES";
		}
	}

	return 0;
}