#include <iostream> 
#include <string>

using namespace std;

int main(){
	int k;
	string s;
	char bykva;
	cin >> s;
	for (int i;i<100;i++){
		if ((s[i]=='a') || (s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){
			k++;
		}
	}
	cout << k;
	return 0;
}