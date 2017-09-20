#include <iostream>

using namespace std;

int main(){

	int x;

	cin >> x;

	bool found = false;

	if(x == 1){
		cout << 1;
		found = true;
	}else{
		int f1 = 1;
		int f2 = 1;
		int f3;
		int index = 2;
		for(int i = 3; i <= 9300; i++){
			
			f3 = f1 + f2;
			index = index + 1;

			if(f3 == x){
				cout << index;
				found = true;
				break;
			}

			f1 = f2;
			f2 = f3;
		}
	}

	if(!found){
		cout << -1;
	}

	return 0;
}
