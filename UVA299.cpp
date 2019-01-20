#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "299"

#define MAX 100010

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);
	int len;
	int a[MAX];

	while(cases--){

		memset(a, 0, sizeof(a));
		scanf("%d", &len);

		for(int i = 0 ; i < len ; i++)
			scanf("%d", &a[i]);

		int count = 0;

		for(int i = 0 ; i < len ; i++){

			for(int j = 1 ; j < len ; j++){

				if(a[j] < a[j-1]){

					swap(a[j], a[j-1]);
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}

	return 0;
}