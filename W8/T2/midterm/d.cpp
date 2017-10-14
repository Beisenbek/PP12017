#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	string s;
	int k = 0;

	cin >> s;

	char d[] = {'a','e','i','o','u'};

	for(int i =0; i < s.length(); ++i){
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