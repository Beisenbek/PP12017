#include <iostream>

using namespace std;

int main(){

	//freopen("C:\\Users\\b.baisakov\\Documents\\PP12017\\W5\\G4\\input.txt","r",stdin);
	
	freopen("input.txt","r",stdin);
	int x,s = 0;

	for(int i = 1; i <= 100; ++i){
		cin >> x;
		s = s + x;
	}

	cout << s;
	
	return 0;
}
