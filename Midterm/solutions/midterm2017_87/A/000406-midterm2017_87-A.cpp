#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int N;

	cin >> N;
	int i = 1;
	for(;i<=N;++i){
			if(N%i==0 && i!=1){
			i;
			break;
		}
	}
	if(i<N) cout << "NO";
	else cout << "YES";
	
	return 0;
}