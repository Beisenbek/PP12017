#include <iostream>

using namespace std;

int f(string word, string text){
	int res = 0;
	for(int i = 0; i <= text.size() - word.size(); ++i){
		string t = text.substr(i,word.size());
		if(t == word){
			res++;
		}
	}
	return res;
}

int f2(string word, string text){
	int res = 0;
	
	size_t pos = text.find(word);

	while(pos != string::npos){
		res++;
		pos = text.find(word,pos+1);
	}	

	return res;
}


int main(){

	string word;
	cin >> word;
	int cnt = 0;

	string part;

	while(cin >> part){
		cnt += f2(word,part);
	}

	cout << cnt << endl;
	
	return 0;
}