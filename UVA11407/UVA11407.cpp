#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11407"

#define MAX 10002

int arr[MAX];

void build(){

	for(int i = 1 ; i <= 100 ; i++){

		for(int j = i*i ; j < 10001 ; j++){

			arr[j] = min(arr[j-(i*i)]+1, arr[j]);
		}
	}
}

void print(int a){

	cout << arr[1] << endl;
	for(int i = 0 ; i < a ; i++)
		cout << arr[i] << " ";
}


int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	memset(arr, 1, sizeof(arr));
	arr[0] = 0;
	build();

	int cases;

	cin >> cases;

	int n;
	while(cases--){

		cin >> n;

		cout << arr[n] << endl;

	}


	return 0;
}