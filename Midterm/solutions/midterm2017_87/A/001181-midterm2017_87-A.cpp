#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int N;

	cin >> N;
	int i = 0;
	for(i<=N;++i;){
		if(N%i==0 && i>1){
			i;
			break;
		}else if(N%i==0 && N==1){
			i;
			break;
		}
	}
	if(i<N) cout << "NO";
	else if(i==1) cout << "NO";
	else cout << "YES";
	
	return 0;
}