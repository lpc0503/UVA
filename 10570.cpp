#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10570"

int solve(int N, int a[]){

	int b[1005];

	int ret = 2147483647;
	int idx = n;
	for(int i = 0 ; i < N ; i++)
		a[idx++] = a[i];

	for(int i = 0 ; i < N ; i++){

		int table[505];
		int count = 0;
		for(int j = 0 ; j < N ; j++){

			table[a[i+j]] = i+j;
			b[i+j] = a[i+j];
		}
		for(int j = 0 ; j < N ; j++){

			if(b[i+j] != j){

				count++;
				idx = table[j];
				swap(b[i+j], b[idx]);
				table[b[idx]] = idx;
			}
		}
		ret = min(ret, count);
	}
	return ret;
}


int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int N;

	while(scanf("%d", &N) != EOF){

		if(N == 0)
			break;

		int n[1005];
		for(int i = 0 ; i < N ; i++){

			scanf("%d", &a[i]);
			a[i]--;
		}

		int ans = 0;
		ans = solve(N, a);
		reverse(a, a+n);
		ans = min(ans, solve(N, a));
		printf("%d\n", ans);
	}
	
	return 0;
}