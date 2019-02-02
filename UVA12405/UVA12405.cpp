/*******************************************************************************************************
* UVa 12405 - Scarecrow                                                                                *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3836 *
* https://www.udebug.com/UVa/12405                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int cases;
	int k = 1;

	scanf("%d", &cases);

	while(cases--){

		int f_long;
		int count = 0;
		scanf("%d", &f_long);

		char field[f_long+1];


		scanf("%s", field);

		for(int i = 0 ; i < f_long ; i++){

			if(field[i] == '.'){

				count++;
				i = i + 2;
			}
			else
				continue;
		}	
		printf("Case %d: %d\n", k++, count);

	}
	return 0;
}