#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "993"

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);

	while(cases--){

		int n;
		scanf("%d", &n);
		//printf("n: %d\n", n);

		int ch[10];
		memset(ch, 0, sizeof(ch));

		if(n < 10){

			printf("%d\n", n);
			continue;
		}
		if(n == 0){

			printf("-1\n");
			continue;
		}

		for(int i = 9 ; i >= 2 ; i--){

			while(n%i == 0){

				ch[i]++;
				n /= i;
			}

			if(n==1)
				break;
		}

		if(n != 1){

			printf("-1\n");
			continue;
		}
		else{

			for(int i = 2 ; i <= 9 ; i++){

				while(ch[i]--){

					printf("%d", i);
				}
			}
			putchar('\n');
		}
	}
	
	return 0;
}