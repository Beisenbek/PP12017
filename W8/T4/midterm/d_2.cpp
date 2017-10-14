#include <iostream>

using namespace std;

int main(){

	string s;
	cin >> s;
	int k = 0;

	char d[] = {'a','e','o','u','i'};

	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < 5; ++j){
			if(s[i] == d[j]){
				k++;
				break;
			}
		}
	}

	cout << k;

	return 0;
}