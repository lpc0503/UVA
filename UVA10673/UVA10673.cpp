/*******************************************************************************************************
* UVa 10673 - Play with Floor and Ceil                                                                         *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1614              *
* https://www.udebug.com/UVa/10673                                                                     *
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

	int n;
	int x, k;

	scanf("%d", &n);

	while(n--){

		scanf("%d%d", &x, &k);
		
		int a = floor((double)x/k);
		int b = ceil((double)x/k);
		
		for(int i = 0 ; i*a < x ; i++){

			if((x-i*a)%b == 0){

				printf("%d %d\n", i, (x-i*a)/b);
				break;
			}
		}
	}
	return 0;
}