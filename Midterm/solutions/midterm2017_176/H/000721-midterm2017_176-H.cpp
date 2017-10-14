#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
            cin>>a[i];
    } 
    int k=0;

    for(int i=1;i<n;i++){
        a[0] = max (a[0], a[i]);
        k++;
    } 
    cout << k;

    return 0;
}
