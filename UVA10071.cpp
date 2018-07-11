/*******************************************************************************************************
* UVa 10071 - Back to High School Physics                                                              *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1012 *
* https://www.udebug.com/UVa/10071                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int v, t;

	while(scanf("%d %d", &v, &t) != EOF){

		int S = v*t*2;
		printf("%d\n", S);
	}
	return 0;
}