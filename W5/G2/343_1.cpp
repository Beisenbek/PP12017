#include <iostream>

using namespace std;

int main(){

	freopen("in.txt","r",stdin);
	
	int n,x;

	cin >> n;

	int s = 0;

	for(int i = 1; i <= n; ++i){
		cin >> x;
		s += x;
	}

	cout << s;


	return 0;
}
