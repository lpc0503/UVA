/*******************************************************************************************************
* UVa 10082 - WERTYU                                                                                   *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1023 *
* https://www.udebug.com/UVa/10082                                                                     *
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

	char keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char str[1005];

	while(cin.getline(str, 1005)){

		for(int i = 0 ; i < strlen(str) ; i++){

			if(str[i] == ' ')
				printf(" ");
/*			else if(str[i] == 'A')
				printf("A");
			else if(str[i] == 'Q')
				printf("Q");
			else if(str[i] == 'Z')
				printf("Z");
*/
			else{

				int j = 0;
				while(str[i] != keyboard[j+1]){

					j++;
				}
				printf("%c", keyboard[j]);
			}
		}
		printf("\n");
	}
	return 0;
}