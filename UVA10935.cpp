#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10935"

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int n;

	while(scanf("%d", &n) && n){

		queue<int> q;
		for(int i = 1 ; i <= n ; i++)
			q.push(i);

		if(q.size() == 1)
			printf("Discarded cards:");
		else
			printf("Discarded cards: 1");


		while(!q.empty()){

			if(q.size() == 1)
				break;
			if(q.front() == 1){

				q.pop();
				q.push(q.front());
				q.pop();
				continue;
			}
			printf(", %d", q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		putchar('\n');
		printf("Remaining card: %d\n", q.front());
	}

	return 0;
}