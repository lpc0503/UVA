/*******************************************************************************************************
* UVa 10370 - Above Average                                                                            *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1311              *
* https://www.udebug.com/UVa/10370                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	int C;//number of test cases

	scanf("%d", &C);

	while(C--){

		int N;//number of people in the class
		scanf("%d", &N);

		int arr[N];
		int tmp = 0;
		float count = 0;
		for(int i = 0 ; i < N ; i++){

			scanf("%d", &arr[i]);
			tmp = tmp + arr[i];
		}

		tmp = tmp / N;
		for(int i = 0 ; i < N ; i++){

			if(arr[i] > tmp)
				count++;
		}
		count = count / N;
		count = count*100;
		printf("%.3f%%\n", count);
	}
	return 0;
}		
