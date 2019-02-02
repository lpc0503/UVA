/*******************************************************************************************************
* UVa 686 - Goldbach's Conjecture (II)                                                                 *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=627               *
* https://www.udebug.com/UVa/686                                                                       *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

bool Prime[33000];	

void isPrime(){

	memset(Prime, true, sizeof(Prime));
	Prime[0] = false;
	Prime[1] = false;	

	for(int i = 0 ; i < 33000 ; i++){

		if(Prime[i]){

			for(int j = i*i ; j < 33000 ; j = j + i){

				z = false;
			}
		}
	}
}

int main(void){

	isPrime();

	int N;

	while(scanf("%d", &N)){

		if(N == 0)
			break;
		int j = N-2;
		int count = 0;

		for(int i = 2 ; i <= N/2 ; i++){

			if(Prime[i] && Prime[j]){

				count++;
			}
			j--;
		}
		printf("%d\n", count);	
	}
	return 0;
}

