#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a= 1, b =1 , c =1;
	cin >> n;
	for (int i = 100;i <=999;i++){
		c = i/100 + (i%100)/10 + i%10;
		if (c == n){
			cout <<i<<endl;
		}
	}
	return 0;
}
