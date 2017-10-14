#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int b, c, d=0, e=0, f=-1, g;
    cin>>b>>c;
    int a[b][c], z[b];
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            cin>>a[i][j];
            z[i]=0;
        }
    }
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            z[i]+=a[i][j];
        }
    }

    for(int i=0; i<b; ++i){
        if(z[i]>f) {
            f=z[i];
            g=i;

        }

    }
    cout<<g+1;
    return 0;
}