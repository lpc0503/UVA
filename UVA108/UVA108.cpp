#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "108"

#define MAX 110
#define MIN -10000000

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n;
	int sum[MAX][MAX];
	int tmp;

	while(scanf("%d", &n) != EOF){

		memset(sum, 0, sizeof(sum));

		for(int i = 1 ; i <= n ; i++){

			for(int j = 1 ; j <= n ; j++){

				scanf("%d", &tmp);
				sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + tmp;
			}
		}

		int ans = MIN;
		int tmpans = 0;

		for(int x1 = 1 ; x1 <= n ; x1++){

			for(int y1 = 1 ; y1 <= n ; y1++){

				for(int x2 = x1 ; x2 <= n ; x2++){

					for(int y2 = y1 ; y2 <=n ; y2++){

						tmpans = sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];
						if(tmpans > ans)
							ans = tmpans;
					}
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}