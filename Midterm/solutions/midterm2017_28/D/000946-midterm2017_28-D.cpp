#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){   
    
    char x[10];
    int n,i,s=0;
    
    std::cin >> x;
    
    n = strlen (x);
    
    for(i=0;i<n;++i)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            s=s+1;
       }
    }
    
    std::cout << s;
    return 0;
}