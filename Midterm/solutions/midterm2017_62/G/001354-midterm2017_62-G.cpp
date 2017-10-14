#include <iostream>

using namespace std;

int main () {

	int N, L, R;
	cin >> N;
	cin >> L;
	cin >> R;

	int arr [N];
	for (int i=0; i < N; i++)
{
	swap (arr[i], arr [N-i]);
}

for ( int i=0; i < N; ++i)

{ 

cout << arr[i] << endl;


}


return 0;

}