/*******************************************************************************************************
* UVa 10107 - What is the Median?                                                                      *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1048              *
* https://www.udebug.com/UVa/10107                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	long long int arr[10001];
	int count = 0, i = 0;

	while(scanf("%lld", &arr[i++]) != EOF){

		long long int tmp = i;
		count++;
		sort(arr, arr+i);

		if(count % 2 == 0){

			tmp = (arr[tmp/2]+arr[(tmp/2)-1])/2;
			printf("%lld\n", tmp);
		}
		else{

			tmp = tmp / 2;
			printf("%lld\n", arr[tmp]); 
		}
	}
	return 0;
}