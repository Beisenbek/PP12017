#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    for(int i=n-1;i>1;i--)
    {
    if(n%i==0)
    {
        a++;
    }
    }
    if(n==1)
        {
            cout<<"NO";
        }
    else if(a==1)
    {
        cout<<"NO";
    }
    else if(a==0)
    {
        cout<<"YES";
    }
    cout<<"NO";
    return 0;
}