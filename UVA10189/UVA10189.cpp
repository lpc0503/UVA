#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10189"

int arr[110][110];
int flag = true;

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n, m;
	int cases = 1;

	while(cin >> n >> m){

		if((m == 0) && (n == 0))
			break;
		if(!flag){

			putchar('\n');
		}

		cout << "Field #" << cases++ << ":" << endl;
		memset(arr, 0, sizeof(arr));
		char tmp;

		for(int i = 1 ; i <= n ; i++){

			for(int j = 1 ; j <= m ; j++){

				cin >> tmp;
				if(tmp == '*'){

					arr[i][j] = -1000;
					arr[i-1][j-1]++;
					arr[i-1][j]++;
					arr[i-1][j+1]++;
					arr[i][j-1]++;
					arr[i][j+1]++;
					arr[i+1][j-1]++;
					arr[i+1][j]++;
					arr[i+1][j+1]++;
				}
			}
		}

		for(int i = 1 ; i <= n ; i++){

			for(int j = 1 ; j <= m ; j++){

				if(arr[i][j] < 0)
					cout << '*';
				else
					cout << arr[i][j];
			}
			putchar('\n');
		}
		flag = false;
	}

	return 0;
}