#include <iostream>

using namespace std;

int main(){
	int n;
	int d = 0;

	cin >> n;

	int a[n];

	for(int i = 1;i <=n;i++){
		if(n % i == 0){
			d++;
		}
	}
	if(n == 1){
		cout << "NO";
	}

	else if(d == 2){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
 

 

