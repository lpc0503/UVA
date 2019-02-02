/********************************************************************************************************************
* Uva 489 - Hangman Judge                                                                 	        			    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=94&page=show_problem&problem=430   *
* https://www.udebug.com/UVa/489                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

bool strAppear[200];
bool isCheck[200];

int main(void){

	#ifdef DBG
	freopen("489.in", "r", stdin);
	freopen("489.out", "w", stdout);
	#endif

	int Round;
	string str;
	string judge;

	while(scanf("%d", &Round)){

		memset(strAppear, 0, sizeof(strAppear));
		memset(isCheck, 0, sizeof(isCheck));
		if(Round == -1)
			break;

		cin >> str >> judge;

		for(int i = 0 ; i < str.size(); i++){

			strAppear[str[i]] = true;
		}

		int die = 0;
		int match = 0;
		for(int i = 0 ; i < judge.size() ; i++){

			if(strAppear[judge[i]]){

				match = i - match;
				isCheck[judge[i]] = true;
			}
			else if(!strAppear[judge[i]]){

				if(!isCheck[judge[i]])
					die++;
				isCheck[judge[i]] = true;
			}

			if(die == 7)
				break;
		}

		bool flag = true;
		printf("Round %d\n", Round);


		for(int i = 0 ; i < str.size(); i++){

			if(!isCheck[str[i]]){

				flag = false;
				break;
			}
		}
		//printf("%d\n", match);
		if(flag)
			printf("You win.\n");
		else if(die >= 7)
			printf("You lose.\n");
		else
			printf("You chickened out.\n");
		
	}
	return 0;
}