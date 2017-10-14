
#include <iostream>
#include <cmath>

using namespace std;

int main(){

 
 int n;
 cin » n;
 int k=0;
 int a[n];

 int mb = -1;

 for(int i = 0; i < n; ++i){
 
 cin » a[i];
 if(mb < a[i]){
 mb = a[i];
 }
 }
 
 

 
 for(int i = 0; i < n; ++i){
 
 if(mb == a[i]){
 k=k+1;
 
 
 }
 }
 cout « k « endl;
 
 return 0;
}