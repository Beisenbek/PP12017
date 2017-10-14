#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	
	for(int i = 100; i <= 999; ++i){
		if(a == (i / 100) + ((i / 10) % 10) + (i % 100)){
			cout << i << endl;
		}
	}
	
return 0;
}