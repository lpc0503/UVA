#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10008"

bool compare(const pair<char, int> lhs, const pair<char, int> rhs){

	if(lhs.second == rhs.second)
		return lhs.first < rhs.first;
	return lhs.second > rhs.second;
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;
	getchar();
	string str;

	vector< pair<char, int> > v(200);

	while(cases--){

		getline(cin, str);
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		for(int i = 0 ; i < str.size() ; i++){

			if(isalpha(str[i])){

				v[str[i]].first = str[i];
				v[str[i]].second++;
			}
		}
	}

	sort(v.begin(), v.end(), compare);

	for(int i = 0 ;; i++){

		if(!v[i].second)
			break;
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}