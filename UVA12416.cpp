/*******************************************************************************************************
* Uva 12416 - Excessive Space Remover                                                                  *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3847 *
* https://www.udebug.com/UVa/12416                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

string str;
int indexx = 0;
int tmp = 0;
int countnum = 0;
int flag = 1;
int ans = 0;

void search_whitespace(){

	for(int i = 0 ; i < str.size() ; i++){
	
		if(isspace(str[i])){

			countnum++;
		}
		else{

			tmp = max(tmp, countnum);
			countnum = 0;
		}
	}
}

void find(){

	while(tmp > 1){

		tmp = (tmp/2) + tmp % 2;
		ans++;
	}
}

int main(void){

	#ifdef DBG
	freopen("12416.in", "r", stdin);
	freopen("12416.out", "w", stdout);
	#endif

	while(getline(cin, str)){

		indexx = 0;
		tmp = 0;
		countnum = 0;
		flag = 1;
		ans = 0;
		
		search_whitespace();
		find();

		printf("%d\n", ans);
	}

	return 0;
}