/********************************************************************************************************************
* Uva 10783 - Odd Sum                                                                                               *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1724  *
* https://www.udebug.com/UVa/10783                                                                                 *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int k = 1;

int main(void){

	#ifdef DBG
	freopen("10783.in", "r", stdin);
	freopen("10783.out", "w", stdout);
	#endif

	int cases;
	int left, right;
	scanf("%d", &cases);

	while(cases--){

		scanf("%d %d", &left, &right);

		if(left % 2 == 0)
			left++;
		if(right % 2 == 0)
			right--;

		int sum = 0;

		for(int i = left ; i <= right ; i += 2)
			sum = sum + i;

		printf("Case %d:", k++);
		printf(" %d\n", sum);
	}
	return 0;
}