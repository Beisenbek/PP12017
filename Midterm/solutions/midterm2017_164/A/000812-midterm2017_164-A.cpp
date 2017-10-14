#include <iostream>
using namespace std;
int main() {

int N;
cin >> N;

if( N % 1 == 0 || N % N == 0 && N /2 == 0)

cout << "YES";
else 
cout << "NO";


return 0;

  }