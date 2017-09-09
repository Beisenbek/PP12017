#include <iostream>
#include <cmath>

/*
Напомним, что год является високосным, 

если его номер кратен 4,но не кратен 100, 

а также если он кратен 400.
*/
using namespace std;

int main(){

	int n;
	cin >> n;

	bool A = (n % 4 == 0);
	bool B = (n % 100 != 0);
	bool C = (n % 400 == 0);

	if(A && B) cout << "YES";
	else if(C) cout << "YES";
	else cout << "NO";

	return 0;
}
