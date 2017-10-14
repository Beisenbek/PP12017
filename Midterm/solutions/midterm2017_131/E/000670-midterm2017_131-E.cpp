#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
int main()
{
string s1,s2;                       
cin>>s1;                                 
int n=s1.size();

int k; 
s2=s1;     
for (int i=n-1,k=0; i>=0; i--, k++)
	s2[k]=s1[i];	


if (s1==s2) cout<<"Yes";
if (s1!=s2) cout<<"No";	 
return 0;			  
}
