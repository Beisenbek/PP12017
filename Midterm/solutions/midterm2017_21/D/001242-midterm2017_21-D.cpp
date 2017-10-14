#include <iostream>
using namespace std;
int main(){

	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==97)
			sum++;
		else if(s[i]==101)
			sum++;
		else if(s[i]==105)
			sum++;

		else if(s[i]==111)
			sum++;

		else if(s[i]==117)
			sum++;

	}
	cout<<sum<<endl;
	return 0;
}