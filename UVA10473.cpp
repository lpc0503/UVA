/*******************************************************************************************************
* UVa 10473 - Simple Base Conversion                                                                   *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1414 *
* https://www.udebug.com/UVa/10473                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	char input[11];
	int num;

	while(cin >> input){

		if(input[0] == '-'){

			return 0;
		}
		if(input[0] == '0' && input[1] == 'x'){

			sscanf(input, "%x", &num);
			printf("%d\n", num);
		}
		else{

			sscanf(input, "%d", &num);
			printf("0x%X\n", num);
		}

	}
	return 0;
}