#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
	 if (n%1==0 && n%n==0) 
	 { if (n&3==0 || n%5==0 || n%7==0 || n%2==0) cout << "NO";

	 	else cout << "YES";
	 }

return 0;
}