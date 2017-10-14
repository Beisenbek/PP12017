#include <iostream> 
#include <string>

using namespace std;

int main(){
	string s;
	char first;
	cin >> first >> s;
	if (first<=96){cout << first << s;}
	else {
		first=first-32;
	cout << first << s;
}

	return 0;
}