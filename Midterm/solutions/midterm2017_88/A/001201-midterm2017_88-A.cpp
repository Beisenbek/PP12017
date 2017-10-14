#include <iostream>
#include <cmath>

using namespace std;

int main (){

int d;
cin >> d;
if ((d % 2 == 0 && d != 2) || (d % 3 == 0 && d != 3) || (d % 5 == 0 && d != 5) || (d % 7 == 0 && d != 7) || (d % 11 == 0 && d != 11))
	cout << "YES";
else 
	cout << "NO";

	return 0;
}




/*Given number. Determine whether it’s prime or not. Number is prime if and only if it’s divisible only
by 1 and itself. 1 is not prime number. 5, 29, 2003 — are prime numbers, but 1, 6, 10, 21 — are not prime
numbers.
Input
One line of input contains one integer number N (1 ≤ N ≤ 1000) — given number.
Output
Print “YES” (without quotes) if it’s prime and “NO” if it’s not.*/
