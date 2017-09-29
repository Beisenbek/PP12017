#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int k = 0;
	
	for(int i = 0; i < n; ++i){
		bool found = false;
		
		for(int j = i - 1; j >=0; --j){
			if(a[i] == a[j]){
				found = true;
				break;
			}
		}

		if(!found){
			k++;
		}
	}

	cout << k << endl;

	return 0;
}
