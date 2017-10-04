#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int i = 1;

	while(i*i <= n){
		cout << i*i << " ";
		i++;
	}

	return 0;
}
