#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i<v.size(); i++)
    {
        cin >> v[i];
    }
    // 1 2 3 4 5
    // 5 1 2 3 4
    int temp = v[n-1];
    for(int i = n-1; i>0; i--)
    {
         v[i] = v[i-1];
    }
    v[0] = temp;
    for(int i = 0; i<v.size(); i++)
    {
         
         cout << v[i] << " ";
         
    }
   
   
     return 0;
}
 