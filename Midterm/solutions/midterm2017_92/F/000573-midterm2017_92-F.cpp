#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int n[a];
	for(int i = 1; i <= a; ++i){
		cin >> n[a];
	}
	for(int i = 1; i < b; ++i){
	cout << n[i] << " ";
	}
	for(int i = b + 1; i <= a; ++i){
	cout << n[i] << " ";
	}
	
return 0;
}