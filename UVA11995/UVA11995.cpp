#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11995"

void stClear(stack<int> &st){

	stack<int> empty;
	swap(st, empty);
}

void qClear(queue<int> &q){

	queue<int> empty;
	swap(q, empty);
}

void pqClear(priority_queue<int> &pq){

	priority_queue<int> empty;
	swap(pq, empty);
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int n;
	stack<int> st;
	queue<int> q;
	priority_queue<int> pq;

	while(scanf("%d", &n) != EOF){

		bool qFlag  = true;
		bool stFlag = true;
		bool pqFlag = true;

		stClear(st);
		qClear(q);
		pqClear(pq);

		int a, b;

		for(int i = 0 ; i < n ; i++){

			scanf("%d %d", &a, &b);

			if(a == 1){

				st.push(b);
				q.push(b);
				pq.push(b);
			}
			else{

				if(st.empty())
					stFlag = false;
				if(q.empty())
					qFlag = false;
				if(pq.empty()){

					pqFlag = false;
					continue;
				}

				if(b == st.top()){

					if(!stFlag);
					else
						st.pop();
				}
				else
					stFlag = false;

				if(b == q.front()){

					if(!qFlag);
					else
						q.pop();
				}
				else
					qFlag = false;

				if(b == pq.top()){

					if(!pqFlag);
					else{

						pq.pop();
					}
				}
				else
					pqFlag = false;
			}
		}
		int tmp = stFlag + qFlag + pqFlag;

		if(tmp > 1)
			printf("not sure\n");
		else if(tmp == 0)
			printf("impossible\n");
		else{

			if(stFlag)
				printf("stack");
			else if(qFlag)
				printf("queue");
			else
				printf("priority queue");

			putchar('\n');
		}
	}
	return 0;
}