#include <iostream>


using namespace std;

int main(){

	int n;
	bool ok = true;
	cin >> n;

	if(n == 1){
		ok = false;
	}else{
		for(int i = 2; i < n; ++i){
			if(n %  i == 0){
				ok = false;
				break;
			}
		}
	}

	if(ok == true){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}