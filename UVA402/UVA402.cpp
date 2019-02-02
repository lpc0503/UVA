#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "402"

bool ch[100000];

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int n;
	int x;
	int a[21];
	int cases = 1;

	while(scanf("%d", &n) != EOF){

		bool flag = true;
		memset(ch, 0, sizeof(ch));
		
		scanf("%d", &x);
		for(int i = 0 ; i < 20 ; i++)
			scanf("%d", &a[i]);

		int count = n;
		int idx = 0;
		int tmp;

		while(idx < 20){

			for(int i = 0 ; i <= n ;){

				if(count <= x)
					break;
				tmp = a[idx];
				if(i > n)
					break;

				while(tmp--){

					i++;
					if(i>n)
						break;
					while(ch[i])
						i++;
				}
				
				if(!ch[i]){

					if(i > n)
						break;

					ch[i] = true;
					count--;
				}

			}
			if(count == x)
					break;

			idx++;
		}
		printf("Selection #%d\n", cases++);

		for(int i = 1 ; i <= n ; i++){

			if(!ch[i]){

				if(flag){

					printf("%d", i);
					flag = false;
				}
				else
					printf(" %d", i);
			}
		}
		putchar('\n');
		putchar('\n');
	}


	return 0;
}