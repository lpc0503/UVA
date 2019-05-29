#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "193"

int cases;
int ans = 0;
int k, n;
int node1, node2;
int arr[101][101];

void dfs(vector<int> v, bool color[], bool walk[], int index, int count, int pre){

	if()

	for(int i = index ; i <= n ; i++){

		for(int j = 1 ; j <= n ; j++){

			if(arr[i][j] == 0)
				continue;
			else{

				
				

				if(!color[pre]){

					color[index] = true;
					count++;
					v.push_back(index);
				}
				dfs(v, j, count, index);
			}
		}
	}
}


int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	bool color[101];
	bool walk[101];
	cin >> cases;

	while(cases--){

		cin >> k >> n;
		memset(arr, 0, sizeof(arr));
		memset(color, 0, sizeof(color));

		for(int i = 0 ; i < k ; i++){

			cin >> node1 >> node2;
			arr[node1][node2] = 1;
			arr[node2][node1] = 1;
		}

		for(int i = 1  ; i <= n ; i++){

			for(int j = 1 ; j <= n ; j++){

				cout << arr[i][j] << " ";
			}
			putchar('\n');
		}

		vector<int> v;

		dfs(v, color, walk, 1, 0, 0);

	}


	return 0;
}