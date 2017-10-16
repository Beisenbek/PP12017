// appending to string
#include <iostream>
#include <string>

using namespace std;

int main (){

  string str("test");
  
  str.erase(0,2);

  cout << str << '\n';
  return 0;
}