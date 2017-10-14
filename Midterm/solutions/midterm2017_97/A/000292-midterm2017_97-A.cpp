#include <iostream>

using namespace std;

int main (){
	
	int n;

	cin >> n;

    if (n == 1){
    	cout << "NO" << endl;
    }

	for (int i = 2; i <= n; i++){
			if (n % i == 0){
				cout << "NO" << endl;
			break;
		}
			else {
				cout << "YES" << endl;
				
		}

	}

	return 0;
}