#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m,a[1000][1000],maxx=0,s=0;
    cin >> n >> m;
    int k=0;
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    {
        cin >> a[i][j];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
        maxx=max(maxx,a[i][j]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++){
       
        if (maxx==a[i][j]){
       
        k++;
        break;}
    }
    }
    cout <<k;
}
 
