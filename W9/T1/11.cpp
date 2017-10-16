#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>

using namespace std;

int main (){


   string a, b;
   cin >> a >> b;

   size_t x = a.find(b);

   if(x == string::npos){
   		cout << "not found!";
   }else{
   		cout << x;
   }


  return 0;
}