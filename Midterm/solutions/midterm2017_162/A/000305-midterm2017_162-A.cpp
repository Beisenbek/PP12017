#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	for(int i = 1; i <= 1000; i++)
		
		if(n%n==0){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		return 0;
}