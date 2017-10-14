#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,l,r;
	cin >> n >> l >> r;

	int x[n];

    for(int i = 0; i <n; ++i){
		cin>>x[i];
	}

	reverse(x + l - 1, x + r);

	for(int i = 0; i <n; ++i){
		cout << x[i] << " ";
	}


	cout << endl;

	return 0;
}
