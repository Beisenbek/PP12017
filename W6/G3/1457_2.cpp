#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;
	int x[n];
	
	for(int i = 0; i < n; ++i){
		x[i] = i + 1;
	}

	a = a - 1;
	b = b - 1;
	c = c - 1;
	d = d - 1;

	for(int i = a; i <= a + (b-a-1)/2; ++i){
		swap(x[i],x[b-i+a]);
	}

	for(int i = c; i <= c + (d-c-1)/2; ++i){
		swap(x[i],x[d-i+c]);
	}

	for(int i = 0; i < n; ++i){
		cout << x[i] << " ";
	}


	return 0;
}

/*
	C = 5
	D = 8
	i = 6

	 A B C D E F G H I
	 0 1 2 3 4 5 6 7 8

 	3+1 = 4/2 = 2


*/