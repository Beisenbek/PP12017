#include <iostream>
#include <string>
using namespace std;

int main() {
    string m;
    char h;
    cin >> m;
    if (m[0] > 90) {
       h = m[0] - 32;
       m[0] = h;
       }
    cout << m;
    cin >> m;
    return 0;
}