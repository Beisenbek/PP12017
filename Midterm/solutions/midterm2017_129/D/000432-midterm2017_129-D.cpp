#include <iostream>

using namespace std;

int main (){
	string S;
	cin>>S;
	int k=0;
	while (S){
		if (S[i]){
			if ( S[i] == 'a' || S[i]== 'e' || S[i]== 'o' || S[i]=='u' || S[i]=='i' )
				k++;
		}
	}
	cout<<k;
	return 0;

}