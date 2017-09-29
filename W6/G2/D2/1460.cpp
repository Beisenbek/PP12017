//G,H,K,M,O
#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,k;

	cin >> n;

	int a[n],b[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	cin >> k;

	k = k % n;

	for(int i = 0; i < n; ++i){
		int h = i - k;
		if(h < 0){
			h = h + n;
		}
		else if(h >= n){
			h = h - n;
		}
		b[i] = a[h];
	}

	for(int i = 0; i < n; ++i){
		cout << b[i] << " ";
	}
	
	cout << endl;


	return 0;
}

/*

	k = 2
	n = 3

	[A] [B] [C] 

	[0] <== [1]:[(i+k-1)%n]
	[1] <== [2]:[(i+k-1)%n]
	[2] <== [0]:[(i+k-1)%n]


  
*/
