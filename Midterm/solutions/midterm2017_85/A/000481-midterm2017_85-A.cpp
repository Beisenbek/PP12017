#include <iostream>
using namespace std;
int main(){
   int n,k=0;
   cin>>n;
   double x;
   if(n==1){
    cout<<"NO"<<endl;
   }
   else{
    for(int i=1;i<=n;i++){
     x=double(n)/double(i);
     if(int(x)*i==n && x!=1.0 && x!=n*1.0){
        k++;
     }
   }
   if(k==0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

   }
   




	return 0;
}