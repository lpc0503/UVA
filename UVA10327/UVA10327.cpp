#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10327"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n;
	int arr[1100];

	while(cin >> n){

		memset(arr, 0, sizeof(arr));
		for(int i = 0 ; i < n ; i++){

			cin >> arr[i];
		}

		int count = 0;
		for(int i = 0 ; i < n ; i++){

			for(int j = 0 ; j < n-i-1 ; j++){

				if(arr[j] > arr[j+1]){
				
					swap(arr[j], arr[j+1]);
					count++;
				}
			}
		}

		cout << "Minimum exchange operations : " << count << endl;
	}


	return 0;
}