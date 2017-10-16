// appending to string
#include <iostream>
#include <string>

using namespace std;

int main (){

  string s;

  int n,k;
  char x;

  cin >> n >> k;

  for(int i = 0; i < n; ++i){
  	cin >> x;
  	s.append(1,x);
  }

  s.erase(k-1,1);

  for(int i = 0; i < s.size(); ++i){
  		cout << s[i] << " ";
  }


  return 0;
}