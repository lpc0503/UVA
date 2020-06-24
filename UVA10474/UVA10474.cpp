#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10474"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif
	
	int N, Q;
    int cases = 1;
    while(cin >> N >> Q) {

        if(N == 0 && Q == 0)
            break;

        printf("CASE# %d:\n", cases++);
        vector<int> v;

        for(int i = 0 ; i < N ; i++) {

            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());

        int temp;
        for(int i = 0 ; i < Q ; i++) {

            cin >> temp;
            auto low = lower_bound(v.begin(), v.end(), temp);
            if(low == v.end() || *low != temp) {

            	printf("%d not found\n", temp);
            }
            else {

            	printf("%d found at %d\n", temp, low-v.begin()+1);
            }
        }
    }
	return 0;
}