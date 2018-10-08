/********************************************************************************************************************
* Uva 11172 - Relational Operator                                                                                   *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113  *
* https://www.udebug.com/UVa/11172                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("11172.in", "r", stdin);
	freopen("11172.out", "w", stdout);
	#endif

	int cases;
	long long int a, b;
	scanf("%d", &cases);

	while(cases--){

		scanf("%lld %lld", &a, &b);

		if(a - b == 0)
			printf("=\n");
		else if(a - b < 0)
			printf("<\n");
		else if(a - b > 0)
			printf(">\n");
	}
	return 0;
}