#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "674"

int coin[] = {1, 5, 10, 25, 50};

int arr[10000];

void build(){

	arr[0] = 1;
	for(int i = 0 ; i < 5 ; i++){

		for(int j = 1 ; j < 10000 ; j++){

			if(j >= coin[i]){

				arr[j] = arr[j]+arr[j-coin[i]];
			}
		}
	}
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	memset(arr, 0, sizeof(arr));
	build();
	int n;

	while(cin >> n){

		cout << arr[n] << endl;
	}

	return 0;
}