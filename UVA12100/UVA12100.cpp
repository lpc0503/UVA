#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "12100"

struct paper{

	int wei;
	int p;

	bool operator < (const paper &r) const{

		return wei < r.wei;
	}
};

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	int num;
	int pos;
	int tmp;
	queue<paper> q;
	priority_queue<paper> pq;
	scanf("%d", &cases);

	while(cases--){

		scanf("%d %d", &num, &pos);

		for(int i = 0 ; i < num ; i++){

			scanf("%d", &tmp);
			pq.push({tmp, i});
			q.push({tmp, i});
		}

		int count = 0;
		while(!pq.empty()){

			paper ch = pq.top();
			paper qch = q.front();

			if(ch.wei == qch.wei && qch.p == pos){

				count++;
				pq.pop();
				q.pop();
				printf("%d\n", count);
			}
			else if(ch.wei == qch.wei){

				count++;
				pq.pop();
				q.pop();
			}
			else{

				q.push(qch);
				q.pop();
			}
		}

		while(!pq.empty())
			pq.pop();

		while(!q.empty())
			q.pop();
	}
	return 0;
}