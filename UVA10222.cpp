/*******************************************************************************************************
* UVa 10222 - Decode the Mad man                                                                       *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1163 *
* https://www.udebug.com/UVa/10222                                                                     *
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

	char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char input[10001];

	while(cin.getline(input, 10001)){

		for(int i = 0 ; i < strlen(input) ; i++){

			if(isalpha(input[i])){

				input[i] = tolower(input[i]);
			}
		}
		for(int i = 0 ; i < strlen(input) ; i++){

			if(input[i] == ' '){

				printf(" ");
			}
			else{

				int j = 0;
				while(input[i] != keyboard[j+2]){

					j++;
				}
				printf("%c", keyboard[j]);
			}
		}
		printf("\n");
	}
	return 0;
}