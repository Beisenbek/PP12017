#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string n;
    cin>>n;
    if(n[0]<97)
    {
        cout<<n;
    }
    else 
    {
        n[0]=n[0]-32;
        cout<<n;
    }
    return 0;
}