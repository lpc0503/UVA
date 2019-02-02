/*******************************************************************************************************
* UVa 272 - TEX Quotes                                                                                 *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208  *
* https://www.udebug.com/UVa/272                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	char input[1001];
	bool flag = false;

	while(gets(input) != NULL){

		for(int i = 0 ; i < strlen(input) ; i++){

			if(input[i]	 == '\"'){

				if(flag == true){

					printf("\'\'");
					flag = false;
				}
				else{

					printf("``");
					flag = true;
				}
			}
			else
				printf("%c", input[i]);
		}
		printf("\n");
	}
	
	return 0;
}