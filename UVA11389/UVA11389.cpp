#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11389"

bool cmp(int a, int b) {

	return a > b;
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n, d, r;

	int morning[105];
	int evening[105];


	while(cin >> n >> d >> r) {

		if(n == 0 && d == 0 && r == 0)
			break;

		memset(morning, 0, sizeof(morning));
		memset(evening, 0, sizeof(evening));

		int tmp;
		for(int i = 0 ; i < n ; i++) {

			cin >> tmp;
			morning[i] = tmp;
		}
		for(int i = 0 ; i < n ; i++) {

			cin >> tmp;
			evening[i] = tmp;
		}

		sort(morning, morning+n);
		sort(evening, evening+n, cmp);

		int ans = 0;
		for(int i = 0 ; i < n ; i++) {

			if(morning[i]+evening[i] > d)
				ans += (morning[i]+evening[i] - d)*r; 
		}
		cout << ans << endl;

	}

	return 0;
}