#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m,a,b,c;
    cin>>m;
    for(int i=100; i<1000; i++){
        if(i/100+i%100+i%10==m)
            cout<<i<<endl;
    }
    return 0;
}