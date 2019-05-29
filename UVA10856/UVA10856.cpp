#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10856"
#define MAX 10000002

int arr[MAX];

void build(){

	for(int i = 0 ; i < MAX ; i++)
		arr[i] = 1;
	arr[0] = 0;
	arr[1] = 0;

	for(int i = 2 ; i < MAX ; i++){

		if(arr[i] == 1){

			for(int j = 2 ; i*j < MAX ; j++){

				arr[i*j] = arr[i] + arr[j];
			}
		}
	}

	for(int i = 0 ; i < MAX ; i++){

		arr[i] += arr[i-1];
	}
}



int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif


	build();
	int N;
	int cases = 1;

	while(cin >> N){

		if(N < 0)
			break;

		int ans = -1;

		for(int i = 0 ; i < MAX ; i++){

			if(arr[i] > N)
				break;

			if(arr[i] == N){

				ans = i;
				break;
			}
		}

		if(ans == -1)
			cout << "Case " << cases++ << ": " << "Not possible." << endl;
		else
			cout << "Case " << cases++ << ": " << ans << "!" << endl;
	}


	return 0;
}