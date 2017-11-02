#include <iostream>

using namespace std;

bool f(int a, int b){
	if(a > b) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	int s[n];
	//student * s = new student[n];

	for(int i = 0; i < n; ++i){
		cin >> s[i];
	}

	sort(s,s + n,f);

	for(int i = 0; i < n; ++i){
		cout << s[i] << " ";
	}

	return 0;
}
