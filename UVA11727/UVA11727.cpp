/********************************************************************************************************************
* Uva 11727 - Cost Cutting                                                                                   	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827  *
* https://www.udebug.com/UVa/11727                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("11727.in", "r", stdin);
	freopen("11727.out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);
	int k = 1;

	while(cases--){

		int arr[3];

		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		sort(arr, arr+3);

		printf("Case %d:", k++);
		printf(" %d\n", arr[1]);
	}
	return 0;
}