#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "1610"
#define String string

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int n;
	String str[1005];
	String str1, str2;

	while(scanf("%d", &n) && n){

		for(int i = 0 ; i < n ; i++)
			cin >> str[i];

		sort(str, str+n);
		str1 = str[(n/2)-1];
		str2 = str[(n/2)];

		String ans = "A";
		int idx = 0;

		while(idx < str1.size()){

			while(ans < str1 && ans[idx] < 'Z')
				ans[idx]++;

			if(ans[idx] <= 'Z' && str1 <= ans && ans < str2)
				break;

			if(str1[idx] != ans[idx])
				ans[idx]--;

			ans += 'A';
			idx++;
		}
		cout << ans << endl;
	}
	
	return 0;
		
}