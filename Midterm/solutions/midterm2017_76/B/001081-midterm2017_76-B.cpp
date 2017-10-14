#include <iostream>

using namespace std;

int main(){
	int S;
	cin >> S;

	for(int i = 100;i <= 999;i++){
      int a = i / 100;
      int b = (i / 10) % 10;
      int c = i % 10;
      if(a + b + c == S){
      	cout << a << b << c << endl;
      }

	}
	return 0;
}

 

