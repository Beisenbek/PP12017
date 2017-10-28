#include <iostream>
#include <map>

using namespace std;

int n;

int s(int x){
	if(x == 1) return 1;
	return s(x-1) + x;
}

int main(){

	cin >> n;
	cout << s(n) << endl;

	return 0;
}