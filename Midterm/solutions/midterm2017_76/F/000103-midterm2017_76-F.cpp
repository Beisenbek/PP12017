#include <iostream>

using namespace std;

int main(){
  int n;

  cin >> n;

  int a[n];
  int k;
  cin >> k;

  for(int i = 0;i < n;i++){
  	cin >> a[i];
  }

  for(int i = 0;i < n;i++){
  	if(k == a[i]){
  		continue;
  	}
  	cout << a[i] << " ";
}
return 0;
}
 

 

