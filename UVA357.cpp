#include<bits/stdc++.h>

using namespace std;

int coin[] = {1, 5, 10, 25, 50};

int main(){

	#ifdef DBG
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int n;
	long long dollar[30010];
	for(int i = 0 ; i < 30010 ; i++)
		dollar[i] = 1;

	for(int i = 1 ; i < 5 ; i++){

		for(int j = 1 ; j < 30010 ; j++){

			if(j >= coin[i]){

				int tmp = j - coin[i];
				dollar[j] = dollar[j] + dollar[tmp];
			}
		}
	}

	while(scanf("%d", &n) != EOF){

		if(dollar[n] == 1)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else
			printf("There are %lld ways to produce %d cents change.\n", dollar[n], n);
	}
	return 0;
}