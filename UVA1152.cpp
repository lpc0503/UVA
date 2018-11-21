#include<bits/stdc++.h>

using namespace std;

const int MAXN = 4010;
int a[MAXN];
int b[MAXN];
int c[MAXN];
int d[MAXN];
long long sums[MAXN*MAXN];
int n;
int idx;

int main(){

	#ifdef DBG
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int testcases;

	scanf("%d", &testcases);

	while(testcases--){

		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		memset(d, 0, sizeof(d));
		memset(sums, 0, sizeof(sums));
		scanf("%d", &n);

		for(int i = 0 ; i < n ; i++)
			scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);

		idx = 0;

		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				sums[idx++] = a[i] + b[j];
		sort(sums, sums+idx);

		long long count = 0;

		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				count += upper_bound(sums, sums+idx, -c[i]-d[j]) - lower_bound(sums, sums+idx, -c[i]-d[j]);
		printf("%lld\n", count);
		if(testcases)
			putchar('\n');
	}
	return 0;
}