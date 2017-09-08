#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a,b;

	cin >> a >> b;

	int x;

	if(a == 0){
		if(b== 0){
			cout << "INF";
		}else{
			cout << "NO";			
		}
	}else{
		if(b % a == 0){
			x = -b / a;
			cout << x;	
		}else{
			cout << "NO";
		}
	}



	return 0;
}
