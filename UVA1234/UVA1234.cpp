#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "1234"

int disjoint_set[100010];

struct edge{

	int start;
	int end;
	int weight;

	bool operator < (const edge &rhs) const {

		return rhs.weight < weight;
	}
};

void print(int len){

	for(int i = 1 ; i <= len ; i++){

		cout << disjoint_set[i] << " ";
	}
	cout << endl;
}

int find(int x){

	return disjoint_set[x] < 0 ? x : (disjoint_set[x] = find(disjoint_set[x]));
}

void Union(int x, int y){

	x = find(x);
	y = find(y);
	disjoint_set[x] = y;
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;

	while(cases--){

		memset(disjoint_set, -1, sizeof(disjoint_set));
		int n, m;
		cin >> n >> m;
		edge d;
		vector<edge> v;

		for(int i = 0 ; i < m ; i++){

			cin >> d.start >> d.end >> d.weight;
			v.push_back(d);
		}
		sort(v.begin(), v.end());

		int count = 0;
		int max = n-1;
		int sum = 0;
		for(int i = 0 ;; i++){

			if(find(v[i].start) == find(v[i].end)){

				sum += v[i].weight;
				count++;
				max++;
				continue;
			}
			else{

				Union(v[i].start, v[i].end);
				count++;
			}

			if(count == max)
				break;
			
		}
		for(int i = count ; i < m ; i++){

			sum += v[i].weight;
		}
		cout << sum << endl;
	}


	return 0;
}