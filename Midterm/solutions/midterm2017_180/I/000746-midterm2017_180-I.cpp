#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  int cnt1=0;
  int cnt2=0;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        cnt1+=arr[i][j];
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==abs((n-i-1))){
        cnt2+=arr[i][j];
      }
    }
  }
  cout<<cnt1<<endl;
  cout<<cnt2;

}
