#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
int main()
{

string s;

getline(cin,s);
int k=0;
int i;
int l=s.size();
	
for(i=0;i<l; i++)
if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')) k++;
cout<<k;
	
return 0;
}