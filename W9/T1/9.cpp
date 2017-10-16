#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>

using namespace std;

int main (){


   string example_str = "123456";
   example_str.insert(3, "+");
   example_str.insert(0, "abcd");

   cout << example_str;


  return 0;
}