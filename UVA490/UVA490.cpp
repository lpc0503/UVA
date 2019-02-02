/********************************************************************************************************************
* Uva 490 - Rotating Sentences                                                                 	        		    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=94&page=show_problem&problem=431   *
* https://www.udebug.com/UVa/624                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("490.in", "r", stdin);
	freopen("490.out", "w", stdout);
	#endif

	string str;

	int arr[101][101];
	memset(arr, 0, sizeof(arr));
	int k = 0;

	int tmp = 0;

	while(getline(cin, str)){

		int len = str.size();
		tmp = max(tmp, len);
		for(int i = 0 ; i < str.size() ; i++)
			arr[i][k] = str[i];
		k++;
	}
	//char space = ' ';
	for(int i = 0 ; i < tmp ; i++){

		for(int j = k-1 ; j >= 0 ; j--){

			if(arr[i][j] == 0){

				printf(" ");
				continue;
			}

			printf("%c", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}