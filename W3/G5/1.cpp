#include <iostream>


using namespace std;


int main(){
	int n;

	cin >> n;

	int a = n % 10;
	int b = (n / 10)%10;
	int c = ((n / 10)/10)%10;
	int d = ((n / 10)/10)/10;

	int t = 1000*a + 100*b + 10*c + d;

	cout << n - t + 1 << endl;

	return 0;
}