/*******************************************************************************************************
* UVa 10035 - Primary Arithmetic                                                                       *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=976  *
* https://www.udebug.com/UVa/10035                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int input_up, input_down;

	while(scanf("%d%d", &input_up, &input_down)){

		if(input_up == 0 && input_down == 0)
			return 0;

		if(input_up < input_down)
			swap(input_up, input_down);


		int count = 0;
		bool carry = false;
		while(input_up > 0){

			if(carry){

				if(input_up % 10 + input_down % 10 > 8){

					count++;
					carry = true;
				}
				else{

					carry = false;
				}

			}
			else{

				if(input_up % 10 + input_down % 10 > 9){

					count++;
					carry = true;
				}
			}
			input_up = input_up / 10;
			input_down = input_down / 10;
		}
	
		if(count == 0)
			printf("No carry operation.\n");
		else{

			if(count == 1)
				printf("%d carry operation.\n", count);
			else
				printf("%d carry operations.\n", count);
		}
	}
	return 0;
		
}