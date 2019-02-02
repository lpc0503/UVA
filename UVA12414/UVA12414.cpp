/********************************************************************************************************************
* Uva 12414 - Calculating Yuan Fen                                                                           	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=279&page=show_problem&problem=3845 *
* https://www.udebug.com/UVa/12414                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int digit[11];
int num[10001];

int countfen(string str, int st){

	memset(digit, 0, sizeof(digit));
	
}

int main(void){

	#ifdef DBG
	freopen("12414in", "r", stdin);
	freopen("12414.out", "w", stdout);
	#endif

	string str;

	while(getline(cin, str)){

		for(int st = 0 ; st <= 10000 ; st++){

			countfen(str, st);
		}
	}
	return 0;
}