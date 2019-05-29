#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10776"

string str;
int n;

void dfs(vector<char> v, int index){

	if(v.size() == n){

		for(auto &c : v)
			cout << c;
		putchar('\n');
		return;
	}

	for(int i = index ; i < str.size() ; i++){

		v.push_back(str[i]);
		dfs(v, i+1);
		v.pop_back();
		while(str[i] == str[i+1])
			i++;
	}
}


int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	while(cin >> str >> n){

		sort(str.begin(), str.end());

		vector<char> v;

		dfs(v, 0);
	}

	return 0;
}