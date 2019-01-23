#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11369"

int a[100010];

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	int n;
	scanf("%d", &cases);

	while(cases--){

		memset(a, 0, sizeof(a));
		scanf("%d", &n);

		for(int i = 1 ; i <= n ; i++)
			scanf("%d", &a[i]);

		sort(a+1, a+n+1);

		long long ans = 0;
		for(int i = n ; i > 0 ;){

			if(i-2 <= 0)
				break;

			ans += a[i-2];
			i-=3;
		}
		printf("%lld\n", ans);
	}
	return 0;
}