/*******************************************************************************************************
* Uva 11296 - Counting Solutions to an Integral                                                        *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2271              *
* https://www.udebug.com/UVa/11296                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("11296.in", "r", stdin);
	freopen("11296.out", "w", stdout);
	#endif

	long long int n;

	while(scanf("%lld", &n) != EOF){

		long long int tmp = n/2 + 1;
		printf("%lld\n", (tmp+1)*tmp/2);
	}
	
	return 0;
}