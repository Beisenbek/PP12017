#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	do{
		cout << n % 10 << " ";
		n = n / 10;
	}while(n > 0);
	
	return 0;
}



/*->123%10
123/10=12
->12%10
12/10 = 1
->1%10
1/10 = 0
->0%10
0/10 = 0 
->0%10
0/10 = 0 
->0%10
0/10 = 0 
->0%10
0/10 = 0 
->0%10
0/10 = 0 
->0%10
0/10 = 0 
->0%10
0/10 = 0*/ 