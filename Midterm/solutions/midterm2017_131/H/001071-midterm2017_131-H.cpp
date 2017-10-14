#include<iostream>
#include<cmath>
using namespace std;
          int arr[101]; 
int main()
{
          int n,maxx=0;          
          int i,k=0;        
          
          cin>>n;        
                            
          for(i=1;i<=n;++i)
          {cin>>arr[i];}
          
          maxx=arr[1];
          for(i=2;i<=n;++i)
		if (maxx<=arr[i]) maxx=arr[i];

	 for(i=1;i<=n;++i)
          if (maxx==arr[i]) k++;
	
cout<<k;                  


          return 0;
}       
