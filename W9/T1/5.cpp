// string::copy
#include <iostream>
#include <string>

using namespace std;

int main (){

  string str("hello world!");
  int n = str.size();

  char buffer[n];
  str.copy(buffer,n,0);
  buffer[n] = '\0';

  cout << buffer;

  return 0;
}