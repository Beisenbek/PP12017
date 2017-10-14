#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool t = 1;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1])
            t = 0;
    if (t)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
