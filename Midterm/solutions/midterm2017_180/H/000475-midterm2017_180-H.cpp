#include <iostream>
using namespace std;
int main(){
  int n;
  int cnt=1;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxi=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>maxi){
      maxi=arr[i];
      cnt=1;
    }else if(arr[i]==maxi){
      cnt++;
    }
  }
  cout<<cnt;
}
