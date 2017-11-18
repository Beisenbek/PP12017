#include <iostream>
#include <stdio.h>
#include <fstream>  
#include <vector>

using namespace std;

vector<string> f1c;
vector<string> f2c;


void fillVector(char * c,vector<string> &v){
  string line;
  fstream fs;
  fs.open (c, fstream::in);
  
  while(getline(fs,line)){
  	v.push_back(line);
  }

  fs.close();
}

bool compareVectors(vector<string> &v1, vector<string> &v2){
	bool res = true;
	
	if(v1.size() != v2.size()){
		res = false;
	}
	else{
		for(int i = 0; i < v1.size(); ++i){
			string t = v1[i];
			string s = v2[i];
			if(s != t){
				cout << s.size() << " ==== " << t.size() << endl; 
				res = false;
				break;
			}
		}
	}

	return res;
}

int main(int argc, char ** argv){

	fillVector(argv[1],f1c);
	fillVector(argv[2],f2c);

	if(compareVectors(f1c,f2c)){
		cout << "same!" << endl;
	}else{
		cout << "not same!" << endl;
	}

	return 0;
}