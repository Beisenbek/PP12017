#include <iostream>
#include <map>

using namespace std;

long long d[1010];

long long f(int x){
	if(d[x] != -1) return d[x];
	cout << x << "<-" << endl;
	d[x] = f(x-1) + f(x-2);
	return d[x];
}

int main(){

	int n;
	cin >> n;
	d[1] = 0;
	d[2] = 1;
	for(int i = 3; i <= 1000; ++i){
		d[i] = -1;
	}

	cout << f(n) << endl;

	return 0;
}