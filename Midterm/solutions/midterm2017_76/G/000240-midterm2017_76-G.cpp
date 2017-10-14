#include <iostream>

using namespace std;

int main(){
int n;

cin >> n;

int a[n];
int L, R;
cin >> L >> R;
for(int i = 1;i <= n;i++){
	cin >> a[i];
}
swap (a[R], a[L]);
for(int i = 1;i <= n;i++){
cout << a[i] <<  " ";
}

return 0;
}
 

 

