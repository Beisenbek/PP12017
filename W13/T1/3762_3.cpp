#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main(){

	string x;
	map<string,int> m;

	while(cin >> x){
		m[x]++;
	}

	pair<string, int> winner = *m.begin();

	map<string,int>::iterator it = m.begin();
	it++;

	for(; it != m.end(); ++it){
		if(winner.second < (*it).second){
			winner = *it;
		}
	}

	cout << winner.first << endl;

	
	return 0;

}


/*
vector:

10	OK		0.02	0.021	1875968
11	OK		0.019	0.02	1875968
12	OK		0.018	0.019	1875968
13	OK		0.009	0.01	1875968
14	OK		0.015	0.016	1875968
15	OK		0.003	0.005	1875968
16	OK		0.002	0.003	1875968
17	OK		0.009	0.011	1875968
18	OK		0.009	0.01	1875968
19	OK		0.022	0.023	1875968
20	OK		0.275	0.279	11407360
21	OK		0.177	0.179	6725632
22	OK		0.146	0.148	4591616
23	OK		0.110	0.112	2977792
24	OK		0.263	0.265	10731520

map1:
20	OK		0.133	0.135	6610944
21	OK		0.117	0.119	4718592
22	OK		0.104	0.106	3637248
23	OK		0.081	0.082	1871872
24	OK		0.115	0.116	6881280

map2:
20	OK		0.144	0.146	6475776
21	OK		0.117	0.119	4718592
22	OK		0.103	0.105	3641344
23	OK		0.088	0.089	2015232
24	OK		0.139	0.142	6475776







*/
