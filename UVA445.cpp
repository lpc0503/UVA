/********************************************************************************************************************
* Uva 445 - Marvelous Mazes                                                                 	        		    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=94&page=show_problem&problem=386   *
* https://www.udebug.com/UVa/445                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("445.in", "r", stdin);
	freopen("445.out", "w", stdout);
	#endif

	string str;
	string tmp;

	while(getline(cin, str)){

		int num = 0;
		for(int i = 0 ; i < str.size() ; i++){

			tmp = str[i];
			if(str[i] == '\n' || str[i] == '!')
				printf("\n");
			else if(isdigit(str[i])){

				num += atoi(tmp.c_str());
			}
			else{

				if(str[i] == 'b'){

					for(int j = 0 ; j < num ; j++)
						printf(" ");
				}
				else{

					for(int j = 0 ; j < num ; j++)
						printf("%c", str[i]);
				}
				num = 0;
			}
		}
		putchar('\n');
	}
	return 0;
}