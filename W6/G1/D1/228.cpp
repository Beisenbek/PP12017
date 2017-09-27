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
 
	int index = 0;

	for(int i = 1; i < n; ++i){
		if(a[index] < a[i]){
			index = i;
		}
	}

	cout << index;


	return 0;
}
