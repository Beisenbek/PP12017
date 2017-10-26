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

	int n = s.size();
	char c[n];
	s.copy(c,n,0);

	sort(c,c+n);

	printString(c);

	return 0;
}