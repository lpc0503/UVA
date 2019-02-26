#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "1149"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	int num_of_items;
	int bin_length;
	int a[100005];

	scanf("%d", &cases);

	while(cases--){

		memset(a, 0, sizeof(a));
		scanf("%d", &num_of_items);
		scanf("%d", &bin_length);

		for(int i = 0 ; i < num_of_items ; ++i)
			scanf("%d", &a[i]);

		sort(a, a+num_of_items);

		int left = 0;
		int right = num_of_items-1;
		int ans = 0;
		while(left<right){

			if(a[left] + a[right] <= bin_length){

				++left;
				--right;
			}
			else
				--right;

			ans++;
		}
		if(left==right)
			++ans;
		printf("%d\n", ans);
		if(cases)
			putchar('\n');
	}

	return 0;
}