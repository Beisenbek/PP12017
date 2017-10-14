#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,a,b;
	cin >> n >> a >> b;

	int x[n];

	for(int i = 0; i <n; ++i){
		x[i] = i + 1;
	}

	reverse(x + a - 1, x + b);

	for(int i = 0; i <n; ++i){
		cout << x[i] << " ";
	}


	cout << endl;

	return 0;
}
