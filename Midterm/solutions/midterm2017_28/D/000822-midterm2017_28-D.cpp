#include <iostream>

int main()
{   
    char x[10];
    int n,i,s=0;
    
    cin >> x;

    n=strlen(x);
    for(i=0;i<n;++i)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            s=s+1;
       }
    }
    
    cout <<s ;
    
    return 0;
}