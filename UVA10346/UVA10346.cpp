#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10346"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n, k;

	while(cin >> n >> k){

		int sum = n;

		while(n/k){

			sum+=(n/k);
			n = n/k+n%k;
		}
		cout << sum << endl;
	}

	return 0;
}