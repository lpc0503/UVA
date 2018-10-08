/********************************************************************************************************************
* Uva 12406 - Help Dexter                                                                                           *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3837                           *
* https://www.udebug.com/UVa/12406                                                                                 *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

long long table[140000];
int digit[16];
int size = 140000;
int dg[25];
int k = 1;

void build_table(){

	memset(dg, 0, sizeof(dg));
	memset(table, 0, sizeof(table));
	memset(digit, -1, sizeof(digit));

	int high_degree = 15, low_degree = 0, pos = 1;

	while(pos < size){

		low_degree = 0;
		digit[low_degree] = digit[low_degree] + 1;

		while(digit[low_degree] == 2){//deal with carry condition

			digit[low_degree] = 0;
			digit[low_degree+1] += 1;
			low_degree++;
		}

		high_degree = 15;
		while(digit[high_degree] < 0){

			high_degree--;
		}
		dg[high_degree+2] = high_degree + 2;

		while(high_degree >= 0){

			table[pos] = table[pos] * 10;

			if(digit[high_degree] == 1)
				table[pos] = table[pos] + 2;
			else if(digit[high_degree] == 0)
				table[pos] = table[pos] + 1;

			high_degree--;
		}
		table[pos] = table[pos] * 10;
		table[pos] = table[pos] + 2;

		pos++;
	}
}

int main(void){

	#ifdef DBG
	freopen("12406.in", "r", stdin);
	freopen("12406.out", "w", stdout);
	#endif

	build_table();

	int cases;

	scanf("%d", &cases);

	while(cases--){

		bool flag = false;
		int p, q;

		scanf("%d %d", &p, &q);

		if(p == 1){

			if(q == 1){
			
				printf("Case %d:", k++);
				printf(" 2\n");
			}
			else{

				printf("Case %d:", k++);
				printf(" impossible\n");
			}
			continue;
		}
		int start = pow(2, dg[p]-1) - 1;
		int check = pow(2, q);


		printf("Case %d:", k++);
		long long temp;

		for(int i = start ; i < start + (start+1) ; i++){

			if(table[i] % check == 0){

				printf(" %lld", table[i]);
				temp = table[i];
				flag = true;
				break;
			}
		}

		for(int i = start*2 ; i >= start ; i--){

			if(table[i] == temp)
				break;

			if(table[i] % check == 0){

				printf(" %lld", table[i]);
				flag = true;
				break;
			}
		}
		if(!flag)
			printf(" impossible");

		putchar('\n');
	}
	return 0;
}