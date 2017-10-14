

#include <iostream>
	
	using namespace std;
	
	int main(){
	
		int n;
		cin >> n;
		if(n==1) cout << "NO";
		if(n%n==0 && n%1==0 && n%2!=0) cout << "YES";
		else cout << "NO";
	
		return 0;
	}
