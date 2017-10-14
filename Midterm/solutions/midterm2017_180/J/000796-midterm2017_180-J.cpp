#include <iostream>
using namespace std;
int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(i==0||j==0){
        cout<<1<<" ";
      }else{
      cout<<(arr[i-1][j]+arr[i][j-1]);
    }
  }
    cout<<endl;
  }
}
