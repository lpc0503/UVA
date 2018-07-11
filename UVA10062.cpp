/*******************************************************************************************************
* UVa 10062 - Tell me the frequencies!                                                                 *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1003 *
* https://www.udebug.com/UVa/10062                                                                     *
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

	char str[1005];

	bool flag = false;

	while(cin.getline(str, 1005)){

		int arr[130] = {0};
		int min_ASCII = 100000;
		int max_ASCII = 0;
		int count = 0;

		if(flag)
			printf("\n");

		for(int i = 0 ; i < strlen(str) ; i++){

			arr[(int)str[i]]++;
			min_ASCII = min(min_ASCII, (int)str[i]);//字串中ASCII最小的
			max_ASCII = max(max_ASCII, (int)str[i]);//字串中ASCII最大的
			count = max(count, arr[(int)str[i]]);//重複出現最大的次數
		}
		for(int i = 1 ; i <= count ; i++){//次數從1開始

			for(int j = max_ASCII ; j >= min_ASCII ; j--){//從ASCII最大開始找

				if(arr[j] == i){

					printf("%d %d\n", j, arr[j]);
				}
			}
		}
		flag = true;//format
	}
	return 0;
}