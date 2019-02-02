/*******************************************************************************************************
* UVa 11541 - Decoding                                                                                 *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2536              *
* https://www.udebug.com/UVa/11541                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int cases;
	int j = 1;
	int nm;
	char ch;
	scanf("%d ", &cases);

	while(cases--){

		printf("Case %d: ", j++);
		while(scanf("%c%d", &ch, &nm) == 2){

			for(int i = 0 ; i < nm ; i++)
				printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}