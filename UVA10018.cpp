/*******************************************************************************************************
* UVa 10018 - Reverse and Add                                                                          *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=959               *
* https://www.udebug.com/UVa/10018                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

bool isPalindromes(char input[], int lenght){

	int half, len = lenght;

	if(len % 2 == 0)
		half = (len + 1) / 2;
	else
		half = len / 2;

	int flag = 0;

	for(int i = 0 ; i < half ; i++){

		if(input[i] == input[len-1-i]){

			flag++;
		}
	}

		if(flag == half)
			return true;
		else
			return false;
}

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int N;
	cin >> N;

	while(N--){

		char input[10];

		int count = 0;

		scanf("%s", input);
		
		int lenght = strlen(input);

		reverse(input, input+lenght);

		for(int i = 0 ; i < lenght ; i++){

			input [i] = input[i] - '0';
		}


		do{

			count++;

			char tmp[10] = {0};
			for(int i = 0 ; i < lenght ; i++){

				tmp[i] = tmp[i] + input[i] + input[lenght-1-i];
				if(tmp[i] > 9){

					tmp[i] = tmp[i] - 10;
					tmp[i+1]++;
					if(i == lenght - 1){

						lenght++;
						break;
					}
				}
			}
			for(int i = 0 ; i < lenght ; i++){

				input[i] = tmp[i];
			}

		}while(!isPalindromes(input, lenght));

		printf("%d ", count);
		for(int i = lenght - 1 ; i >= 0 ; i--){

			printf("%c", input[i] + '0');
		}
		printf("\n");
	}
	return 0;
		
}