#include <iostream>

using namespace std;

int main (){
	
	int n;

	cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    	if (n % i == 0){
    		cnt++;
    	}
    if (cnt > 1)
    	cout << "NO" << endl;
    if (cnt == 1)
    	cout << "YES" << endl;

	return 0;
}