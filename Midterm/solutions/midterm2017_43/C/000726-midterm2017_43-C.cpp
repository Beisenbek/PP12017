#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
char t;
cin>>t;
 
 if (ascii(t)<=97)
 {
 	cout<< t;
 }else{
 	cout <<  t - 32;
 }


return 0;
}
