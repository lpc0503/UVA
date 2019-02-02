#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11491"

#define ULL unsigned long long int
#define MAX 10005

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	int N, D;

	while(~scanf("%d %d", &N, &D)){

		if(N == 0 && D == 0)
			break;
		getchar();
		string num;
		getline(cin, num);

		int numIdx = 0;
		stack<int> st;
		st.push(num[0]-'0');

		int tmp = 0;
		for(int i = 1 ; i < N ; i++){

			tmp = num[i] - '0';
			while(tmp > st.top() && numIdx != D){

				st.pop();
				numIdx++;
				if(st.size() == 0)
					break;
			}
			st.push(tmp);
		}

		for(int i = numIdx ; i < D ; i++)
			st.pop();

		vector<int> ans;
		tmp = st.size();
		for(int i = 0; i < tmp ; i++){

			ans.push_back(st.top());
			st.pop();
		}

		for(int i = ans.size()-1 ; i >= 0 ; i--)
			printf("%d", ans[i]);
		putchar('\n');
	}
	
	return 0;
		
}