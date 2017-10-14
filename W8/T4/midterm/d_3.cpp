#include <iostream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	int k = 0;
	char c;

	char d[] = {'a','e','o','u','i'};

	while(cin >> c){
		for(int j = 0; j < 5; ++j){
			if(c == d[j]){
				k++;
				break;
			}
		}
	}

	cout << k;

	return 0;
}