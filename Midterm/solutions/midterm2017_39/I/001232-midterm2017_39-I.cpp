#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main(){
 
   
    int n,s,m;
    s=0;
    m=0;
    cin >> n;
 
    int a[n][n];
 
    for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
}
 
    for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
        if (i==j)  
            s=s+a[i][j];
        if (i+j==n-1)
            m=m+ a[i][j];
    }
}
            cout << s<< endl <<m;
    return 0;
}