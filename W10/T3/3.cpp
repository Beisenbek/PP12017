#include <iostream>

using namespace std;

void printString(string s){
	for(int i =0 ; i < s.size(); ++i){
		cout << s[i];
	}
	cout << endl;
}

int main(){

	string s;
	cin >> s;

	printString(s);

	for(int i = 0; i < s.size()-1; ++i){
		for(int j = i + 1; j < s.size(); ++j){
			if(s[j] < s[i]){
				swap(s[i],s[j]);
			}
		}
	}

	printString(s);

	return 0;
}