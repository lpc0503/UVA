#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "1594"

typedef map<string, bool> map_string;

void print(vector<int> v){

	for(int i = 0 ; i < v.size() ; i++){

		cout << v[i] << " ";
	}
	putchar('\n');
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;

	while(cases--){

		vector<int> v;
		map_string mp;
		map_string::iterator it;
		int n;
		cin >> n;
		int tmp;
		for(int i = 0 ; i < n ; i++){

			cin >> tmp;
			v.push_back(tmp);
		}
		string str = string(v.begin(), v.end());
		mp[str] = true;

		while(1){

			int sum = 0;
			int a = v[0];
			for(int i = 0 ; i < v.size()-1 ; i++){

				v[i] = abs(v[i] - v[i+1]);
				sum += v[i];
			}
			v[v.size()-1] = abs(v[v.size()-1] - a);
			stringstream ss;
			copy(v.begin(), v.end(), ostream_iterator<int>(ss," "));
			str = ss.str();		


			// for(auto i : v)
			// 	str += to_string(i);
			// str = string(v.begin(), v.end());
			// print(v);
			// cout << "str: " << str << endl;

			it = mp.find(str);

			if(sum == 0){

				cout << "ZERO" << endl;
				break;
			}

			if(it == mp.end()){

				mp[str] = true;
			}
			else{

				cout << "LOOP" << endl;
				break;
			}
		}
	}

	return 0;
}