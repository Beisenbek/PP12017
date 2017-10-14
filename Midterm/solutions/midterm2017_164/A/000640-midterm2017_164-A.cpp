#include <iostream>
using namespace std;
int main() {


int N,k;
cin>>N;
if(N % 1 == 0 || N % N == 0 )
  cout<<"YES";
else if (N % 2 ==0 && N % 1 == 0 && N % N == 0)
  cout<<"NO";

return 0;

  }