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
    reverse(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++)
    {
         
         cout << v[i] << " ";
    }
   
     return 0;
}