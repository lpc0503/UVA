#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "884"
#define MAX 1000001

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

	for(int i = 2 ; i < MAX ; i++){

		arr[i] += arr[i-1];
	}

}

void print(){

	for(int i = 1 ; i < 100001 ; i++){

		cout << arr[i] << endl;
	}
}


int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	build();

	int n;

	while(cin >> n){

		cout << arr[n] << endl;
	}

	return 0;
}