/********************************************************************************************************************
* Uva 12455 - Bars                                                                                                  *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3886              *
* https://www.udebug.com/UVa/12455                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int arr[25];
int ans = 0;
int len;
int num;

int test= 1;

void dfs(int sum, int i){

	if(sum > len)
		return;
	if(sum == len)
		ans = 1;
	else{

		for(; i <= num ; i++){

			dfs(sum+arr[i], i+1);
		}
	}
}

int main(void){

	#ifdef DBG
	freopen("12455.in", "r", stdin);
	freopen("12455.out", "w", stdout);
	#endif

	int cases;

	scanf("%d", &cases);

	while(cases--){

		memset(arr, 0, sizeof(arr));
		scanf("%d", &len);
		scanf("%d", &num);

		for(int i = 1 ; i <= num ; i++)
			scanf("%d", &arr[i]);

		ans = 0;
		dfs(0, 1);

		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}