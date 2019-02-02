#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11582"

#define ULL unsigned long long int
#define MAX 10005

ULL MOD(ULL x, ULL b, ULL k){

	//cout << x << " " << b << endl;
	if(b == 0)
		return 1;
	ULL tmp = MOD(x, b/2, k);
	ULL ans = (ULL)tmp*tmp%k;
	if(b % 2 == 1)
		ans = ans * x % k;
	return (int)ans;
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);

	while(cases--){

		int n;
		ULL a, b;
		scanf("%llu %llu %d", &a, &b, &n);
		int Fibo[MAX];
		int tmp;

		Fibo[0] = 0;
		Fibo[1] = 1%n;
		for(int i = 2 ; i <= MAX ; i++){

			Fibo[i] = (Fibo[i-1] + Fibo[i-2]) % n;
			if(Fibo[i] == Fibo[1] && Fibo[i-1] == Fibo[0]){

				tmp = i - 1;
				break;
			}
		}

		int ans = MOD(a%tmp, b, (ULL)tmp);
		printf("%d\n", Fibo[ans]);

	}
	
	return 0;
		
}