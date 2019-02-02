/*******************************************************************************************************
* UVa 494 - Kindergarten Counting Game                                                                              *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=435  *
* https://www.udebug.com/UVa/494                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	char s[1000000];

	while(cin.getline(s, 1000000)){

		int count = 0;
		for(int i = 1 ; i < strlen(s) ; i++){

			if(!isalpha(s[i]) && isalpha(s[i-1]))
				count++;
			else if(!isalpha(s[i]) && !isalpha(s[i-1]))
				continue;
		}
		cout << count << endl;
	}
	return 0;
		
}