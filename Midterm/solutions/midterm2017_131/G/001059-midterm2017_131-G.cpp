#include<iostream>
#include<cmath>
using namespace std;
          int arr[1000000];   
	  int ar[1000000]; 
int main()
{
          int n,k=0;          
          int i,l,r;         
          
          cin>>n>>l>>r;        
                            
          for(i=1;i<=n;++i)
          {cin>>arr[i];}
          
    
          for(i=1;i<=n;++i)
		ar[i]=arr[i]; 
	          
          for(i=l;i<=r;++i)    
		{
		ar[i]=arr[r-k]; 
	        k++;
		}
	 for(i=1;i<=n;++i) cout<<ar[i]<<' ';


          return 0;
}       
