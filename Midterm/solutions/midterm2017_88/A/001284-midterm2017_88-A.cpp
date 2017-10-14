#include <iostream>
#include <cmath>

using namespace std;

int main (){

int d, b, k;

cin >> d;

b = sqrt(d);

for (int i = 0; i <= b; i++){
if (b % i == 0)
k++;
}

if (k > 0 && d!= 1)
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
