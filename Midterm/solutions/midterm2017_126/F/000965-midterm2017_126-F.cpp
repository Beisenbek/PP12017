#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a;
    b = a % 10;
    c = (a % 100) / 10;
    d = a / 100;
    cout << b + c +d;
    return 0;
    
}