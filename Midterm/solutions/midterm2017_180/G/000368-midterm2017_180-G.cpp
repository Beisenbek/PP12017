#include <iostream>
using namespace std;
int main(){
  int n,l,r;
  cin>>n>>l>>r;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  swap(arr[l-1],arr[r-1]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
