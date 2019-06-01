#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10462"

int disjoint_set[100010];

struct edge{

	int start;
	int end;
	int weight;

	edge(){

		start = -1;
		end = -1;
		weight = -1;
	}

	bool operator < (const edge & rhs) const {

		return weight < rhs.weight;
	}
	friend ostream& operator << (ostream& out, const edge & rhs) {

		cout << rhs.start << " " << rhs.end << " " << rhs.weight;;
		return out;
	}
	friend bool operator == (const edge & lhs, const edge & rhs){

		return (lhs.start == rhs.start && lhs.end == rhs.end && lhs.weight == rhs.weight);
	}
};

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
	int k = 1;
	cin >> cases;

	edge trash;

	while(cases--){

		memset(disjoint_set, -1, sizeof(disjoint_set));
		disjoint_set[0] = 1;
		cout << "Case #" << k++ << " : ";
		int n, e;
		cin >> n >> e;

		edge d;
		vector<edge> v;
		vector<edge> choose;
		int less = 0;
		int ans = 10000000;

		for(int i = 0 ; i < e ; i++){

			cin >> d.start >> d.end >> d.weight;
			v.push_back(d);
		}
		sort(v.begin(), v.end());

		if(n-1 > e){

			cout << "No way" << endl;
			continue;
		}
		else{
			
			int count = 0;
			int max = n-1;
			for(int i = 0 ; i < e ; i++){
				
				if(find(v[i].start) == find(v[i].end)){
					
					count++;
					max++;
					continue;
				}
				else{
					
					Union(v[i].start, v[i].end);
					less += v[i].weight;
					count++;
					choose.push_back(v[i]);
				}

				if(count == max)
					break;
			}

			int aaa = std::count(disjoint_set, disjoint_set + n, -1);
			if(aaa > 1){
				
				cout << "No way" << endl;
				continue;
			}
			if(n-1 == e){
				
				ans = 9999999;
			}
			else
				ans = 10000000;
			for(int i = 0 ; i < choose.size() ; i++){
				
				count = 0;
				max = n-1;
				int mmm = 0;
				memset(disjoint_set, -1, sizeof(disjoint_set));
				for(int j = 0 ; j < e; j++){

					if(choose[i] == v[j]){
						
						choose[i] = trash;
						continue;
					}
					if (find(v[j].start) == find(v[j].end)){
						
						count++;
						max++;
						continue;
					}
					else{

						Union(v[j].start, v[j].end);
						mmm += v[j].weight;
						
						count++;
					}

					if (count == max)
						break;
				}
				if(mmm < ans && count >= max){

					ans = mmm;
				}
			}
		}

		if (ans == 10000000)
			cout << "No way" << endl;
		else if(n-1 == e)
			cout << "No second way" << endl;
		else
			cout << ans << endl;
	}

	return 0;
}