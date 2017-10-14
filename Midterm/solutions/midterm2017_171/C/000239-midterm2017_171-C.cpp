#include <iostream>

using namespace std;

int main(){
    
    string s;
    
    cin >> s;
    
    for(int i = 0; i < s.length(); i++){
        int code = (int) s[i];
        if(code >= 97 && code <= 122)
            code = code - 32;
        
        cout << (char) code;
    }
    
    return 0;
}
