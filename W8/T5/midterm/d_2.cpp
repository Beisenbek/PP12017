#include <iostream>

using namespace std;

int main(){
	
	string s;
	cin >> s;

	char d[] = {'a','o','u','i','e'};

	int k = 0;

	for(int i = 0; i < s.size(); ++i){
		for(int j = 0; j < 5; ++j){
			if(s[i] == d[j]){
				k++;
				break;

			}
		}
	}

	cout << k << endl;
	
	return 0;
}