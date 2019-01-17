#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10015"

bool prime[35000];
int p[35000];
int k = 0;

void build(){

	memset(prime, 1, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	p[1] = 1;	

	for(int i = 2 ; i <= 35000 ; i++){

		if(prime[i]){

			p[k++] = i;
			//cout << p[0] << endl;
			for(int j = 2*i ; j <= 35000 ; j+=i)
				prime[j] = false;
		}
	}
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	build();
	//cout << p[0] << endl;

	int n;
	while(scanf("%d", &n) != EOF){

		if(n == 0)
			break;

		//cout << prime[0] << endl;
		int ans = 0;
		int j = 0;
		int tmp = n;
		for(int i = 2 ; i <= n ; i++){

			ans = (ans+p[n-i])%i;
			//cout << "ans: " << ans << endl;
		}
		printf("%d\n", ans+1);
	}
	return 0;
}