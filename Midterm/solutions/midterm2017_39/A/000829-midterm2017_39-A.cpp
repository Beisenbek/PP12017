#include <iostream>
using namespace std;

int main(){
    int n;
    int a=0;
    cin>>n;
    for (int i=1; i<=n; ++i) {
    if (n%i==0) a++; }
    if (a==2) { cout<< "YES"; }
    else { cout<< "NO";}

 return 0;
} 
/* n=15 */