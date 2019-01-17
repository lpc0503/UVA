#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "524"

int n;

bool ch[300];
bool a[20];
int ans[30];

void build(){

	for(int i = 0 ; i <= 300 ; i++)
		ch[i] = true;

	ch[0] = false;
	ch[1] = false;
	for(int i = 2 ; i <= 300 ; i++){

		if(ch[i]){

			for(int j = i+i ; j <= 300 ; j+=i)
				ch[j] = false;
			
		}
	}
}

void dfs(int k){

	if(k == n+1){

		if(ch[ans[1]+ans[n]]){

			for(int i = 1 ; i < n ; i++)
				printf("%d ", ans[i]);
			printf("%d\n", ans[n]);
		}
		return;
	}

	for(int i = 2 ; i <= n ; i++){

		if(ch[ans[k-1]+i] && !a[i]){

			ans[k] = i;
			//cout << k << ": " << ans[k] << endl;
			a[i] = true;
			dfs(k+1);
			a[i] = false;
		}
	}
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	build();
	int cases = 1;
	
	while(scanf("%d", &n) != EOF){

		memset(a, 0, sizeof(a));
		//memset(ans, 0, sizeof(ans));
		ans[1] = 1;

		if(cases != 1)
			putchar('\n');

		printf("Case %d:\n", cases++);
		dfs(2);
	}
	
	return 0;
}