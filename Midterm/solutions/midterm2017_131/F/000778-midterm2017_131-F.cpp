#include<iostream>
#include<cmath>
using namespace std;
          int arr[1000000];    
int main()
{
          int n,k;          
          int i;         
          
          cin>>n>>k;        
                            
          for(i=1;i<=n;++i)
          {cin>>arr[i];}
          
    
          for(i=1;i<k;++i)
		cout<<arr[i]<<" ";
	
          for(i=k+1;i<=n;++i)
		cout<<arr[i]<<" ";                                 
                                              
          
          return 0;
}       
