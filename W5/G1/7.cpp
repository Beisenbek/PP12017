#include <iostream>

using namespace std;

int main(){

	int i = 1,j = 1,k = 1,m = 1;

	i = i + 1;
	j += 1;//increment by value
	k++;// postfix increment
	++m;//prefix increment

	cout << i << endl;//2	
	cout << j << endl;//2	
	cout << k << endl;//2	
	cout << m << endl;//2	

	return 0;
}
