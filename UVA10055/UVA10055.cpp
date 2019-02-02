/*******************************************************************************************************
* UVa 10055 - Hashmat the Brave Warrior                                                                *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996  *
* https://www.udebug.com/UVa/10055                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	long long int army, army2;

	while(scanf("%lld %lld", &army, &army2) != EOF){

		long long int ans = abs(army - army2);
		printf("%lld\n", ans);	
	}
	return 0;
		
}