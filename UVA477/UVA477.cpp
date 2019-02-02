/*******************************************************************************************************
* UVa 477 - Points in Figures: Rectangles and Circles                                                  *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=418  *
* https://www.udebug.com/UVa/477                                                                       *
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

	char shape;
	double a[10][5];
	int count = 0;
	int k = 0;

	while(cin >> shape){

		if(shape == '*')
			break;
	
		switch(shape){

			case 'r':
				for(int j = 0 ; j < 4 ; j++)
					cin >> a[k][j];
				a[k][4] = 'r';
				k++;
				break;
			case 'c':
				for(int j = 0 ; j < 3 ; j++)
					cin >> a[k][j];
				a[k][4] = 'c';
				k++;
				break;
		}
	}
	int cases = 1;

	double x, y;
	while(cin >> x >> y){

		if(x == 9999.9 && y == 9999.9)
			break;
		int flag = 1;

		for(int i = 0 ; i < k ; i++){

			if(a[i][4] == 'r'){

				if(a[i][0] < x && x < a[i][2] && a[i][3] < y && y < a[i][1]){

					printf("Point %d is contained in figure %d\n", cases, i+1);
					flag = 0;
				}
			}

			else if(a[i][4] == 'c'){

				if(pow(x - a[i][0], 2) + pow(y - a[i][1], 2) < pow(a[i][2], 2)){

					printf("Point %d is contained in figure %d\n", cases, i+1);
					flag = 0;
				}
			}
		}

		if(flag == 1){

			printf("Point %d is not contained in any figure\n", cases);
		}	
		cases++;
	}
	return 0;
}