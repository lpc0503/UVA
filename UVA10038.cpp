/*******************************************************************************************************
* UVa 10038 - 10038 - Jolly Jumpers                                                                     *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979   *
* https://www.udebug.com/UVa/10038                                                                      *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int N;

	while(scanf("%d", &N) != EOF){	

		int arr[N];

		for(int i = 0 ; i < N ; i++){

			cin >> arr[i];
		}
		int tmp[N-1];
		for(int i = 0 ; i < N-1 ; i++){

			tmp[i] = abs(arr[i] - arr[i+1]);
		}
		sort(tmp, tmp+(N-1));
		int flag = 1;

		if(N-1 == 0)
			cout << "Jolly" << endl;
		else if(tmp[0] != 1)
			cout << "Not jolly" << endl;
		else{

			for(int i = 0 ; i < N - 2 ; i++){

				if(abs(tmp[i] - tmp[i+1]) != 1){

					cout << "Not jolly" << endl;
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				cout << "Jolly" << endl;
		}
	}

	return 0;
}