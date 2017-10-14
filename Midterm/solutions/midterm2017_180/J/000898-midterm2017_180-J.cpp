#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,m;
  int sum=0;
  int row=0;
  cin>>n;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    sum+=arr[0][i];
  }
  int max=sum;

  for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
      sum+=arr[i][j];
    }
    if(sum>max){
      max=sum;
      row=i;
    }
  }
  cout<<row+1;
}
