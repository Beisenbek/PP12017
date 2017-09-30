#include <iostream>
#include <cmath>
#include <algorithm>

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
		if(h < 0 ){
			h = h + n;
		}else if (h >= n){
			h = h - n;
		}
		b[i] = a[h];
	}

	for(int i = 0; i < n; ++i){
		cout  << b[i] << " ";
	}

	return 0;
}

//4 * N = (4 * 10 ^ 5 B)/10^6 = 0.8 MB ~ 1MB 

// 7 * N ~ 10^5 < 10 ^ 8 < 1s
/*
		t = E
		0 1 2 3 4
		A B C D E
		A -> B, B -> C, C-> D, D->E, E-A

		t <- [4]

		[4]<-[3]
		[3]<-[2]
		[2]<-[1]
		[1]<-[0]
		
		[0]<-t
		
*/

/*
			A B C D E 
			0 1 2 3 4

			k = 2
			
			[0] <-- [0-2] = [5-2] = [3]

			[i] <-- [i-k+n]

			[2] <-- [2-2] = [0]

			[3] <--[3-2] = [1]


 
		*/

/*
			A B C D E 
			0 1 2 3 4

			k = -2
			

			[0] <-- [0-2] = [5-2] = [3]

			[i] <-- [i+k-n]

			[2] <-- [2-2] = [0]

			[3] <--[3-2] = [1]


 
		*/