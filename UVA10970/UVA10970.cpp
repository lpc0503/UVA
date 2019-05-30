#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10970"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int M, N;

	while(cin >> M >> N){

		if(N > M){

			swap(M, N);
		}

		int sum = M-1;
		sum += (N-1)*M;

		cout << sum << endl;
	}

	return 0;
}