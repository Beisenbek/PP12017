#include <iostream>

using namespace std;

int main(){
	
	int n,k,x;

	cin >> n >> k;

	for(int i = 0; i < n; ++i){
		cin >> x;
		if(i == k - 1){
			continue;
		}
		cout << x << " ";
	}
	
	return 0;
}