#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int b, c, d=0, e=0;
    cin>>b;
    int a[b][b];
    for(int i=0; i<b; ++i){
        for(int j=0; j<b; ++j){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<b; ++i){
        for(int j=0; j<b; ++j){
            if(i==j) d+=a[i][j];
            if(i+j==b-1) e+=a[i][j];
        }
    }
    cout<<e<<endl;
    cout<<d;





    return 0;
}