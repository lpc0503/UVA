/*******************************************************************************************************
* UVa 10976 - Fractions Again?!                                                                        *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1917 *
* https://www.udebug.com/UVa/10976                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int k;

	while(scanf("%d", &k) != EOF){

		int dis = 1;
		int y = k + 1;
		int count = 0;
		int array_x[100000] = {0}, array_y[100000] = {0};

		while(y <= 2*k){

			if(k * y % dis == 0){

				array_x[count] = (k * y) / dis;
				array_y[count] = y;
				count++;
				dis++;
				y++;
			}
			else{

				dis++;
				y++;
				continue;
			}
		}
		cout << count << endl;
		for(int i = 0 ; i < count ; i++){

			printf("1/%d = 1/%d + 1/%d\n", k, array_x[i], array_y[i]);
		}
	}

	return 0;
}