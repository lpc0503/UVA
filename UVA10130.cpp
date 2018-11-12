/********************************************************************************************************************
* Uva 10130 SuperSale                                                                                   		    *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1071						    *
* https://www.udebug.com/UVa/10130                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

bool check[100000];

int main(void){

	#ifdef DBG
	freopen("10130.in", "r", stdin);
	freopen("10130.out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);

	while(cases--){

		memset(check, 1, sizeof(check));
		int N;
		scanf("%d", &N);

		pair<int, int> Ob[1001];
		for(int i = 0 ; i < N ; i++)//first = value second = weight
			scanf("%d %d", &Ob[i].first, &Ob[i].second);
		//sort(Ob, Ob+N);
		
		int numOfParent;
		scanf("%d", &numOfParent);
		int arr[numOfParent];
		int P = 0;

		for(int i = 0 ; i < numOfParent ; i++){

			scanf("%d", &arr[i]);
			P = max(P, arr[i]);
		}
		//sort(arr, arr+numOfParent);
		int ans[P+1][2];
		memset(ans, 0, sizeof(ans));
		for(int i = 0 ; i < N ; i++){

			for(int j = 1 ; j <= P ; j++){

				if(j >= Ob[i].second){

					ans[j][1] = max(Ob[i].first + ans[j-Ob[i].second][0], ans[j][0]);
				}
			}

			for(int j = 1 ; j <= P ; j++){

				ans[j][0] = ans[j][1];
				//printf("%d: %d\n", j, ans[j][0]);
			}
		}
		int total = 0;
		for(int i = 0 ; i < numOfParent ; i++)
			total += ans[arr[i]][1];
		printf("%d\n", total);
	}

	return 0;
}