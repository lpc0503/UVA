#include<bits/stdc++.h>

using namespace std;

int num[100005];
long long ans[100005];
int l[100005];
int r[100005];

bool flag = true;

int main(){

	#ifdef DBG
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int cases;

	while(scanf("%d", &cases) != EOF){

		memset(ans, 0, sizeof(ans));
		memset(num, -1, sizeof(num));
		memset(l, 0, sizeof(l));
		memset(r, 0, sizeof(r));
		for(int i = 1 ; i <= cases ; i++){

			scanf("%d", &num[i]);
			ans[i] = ans[i-1] + num[i];
			l[i] = i;
			r[i] = i;
		}

		for(int i = 1; i <= cases; i++) {
        	
        	while(num[l[i] - 1] >= num[i])
           		l[i] = l[l[i] - 1];
  	  	}
  	 	for(int i = cases; i >= 1; i--) {
        	
        	while(num[r[i] + 1] >= num[i])
            	r[i] = r[r[i] + 1];
    	}

    	long long m = -1;

    	int ll, rr;
    	long long s;
    	for(int i = 1 ; i <= cases ; i++){

    		s = num[i] * (ans[r[i]] - ans[l[i]-1]);
    		if(s > m){

    			m = s;
    			ll = l[i];
    			rr = r[i];
    		}
    	}
    	if(m == 0)
    		ll = rr = 1;

    	if(flag){

    		flag = false;
    		printf("%lld\n%d %d\n", m, ll, rr);
    	}

    	else{

    		putchar('\n');
    		printf("%lld\n%d %d\n", m, ll, rr);
    	}
	}

	return 0;
}