/********************************************************************************************************************
* Uva 624 - CD                                                                               	         		    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=8&page=show_problem&problem=565    *
* https://www.udebug.com/UVa/624                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int check[100000];

int main(void){

	#ifdef DBG
	freopen("624.in", "r", stdin);
	freopen("624.out", "w", stdout);
	#endif

	int soundTrackLength;
	int numOfSoundTrack;

	while(scanf("%d", &soundTrackLength) != EOF){

		memset(check, 0, sizeof(check));

		scanf("%d", &numOfSoundTrack);
		int list[numOfSoundTrack+1];
		memset(list, 0, sizeof(list));

		//printf("%d\n", list[0]);

		for(int i = 1 ; i <= numOfSoundTrack ; i++)
			scanf("%d", &list[i]);
		//sort(list, list+numOfSoundTrack);
		//printf("%d %d %d", list[0], list[1], list[2]);

		int ans_list[numOfSoundTrack+1][soundTrackLength+1];
		memset(ans_list, 0, sizeof(ans_list));
		//printf("%d\n", ans_list[0][5]);

		for(int i = 1 ; i <= numOfSoundTrack ; i++){

			for(int j = 1 ; j <= soundTrackLength ; j++){

				if(j >= list[i])
					ans_list[i][j] = max(list[i] + ans_list[i-1][j-list[i]], ans_list[i-1][j]);
				
				else
					ans_list[i][j] = ans_list[i-1][j];
			}
		}

		int tmp = soundTrackLength;
		int count = 0;

		for(int i = numOfSoundTrack ; i > 0 ; i--){

			if(ans_list[i][tmp] != ans_list[i-1][tmp]){

				check[count] = list[i];
				count++;
				tmp -= list[i];
			}
			if(tmp <= 0)
				break;
		}

		for(int i = count-1 ; i >= 0 ; i--)
			printf("%d ", check[i]);
		printf("sum:%d\n", ans_list[numOfSoundTrack][soundTrackLength]);
	}
	return 0;
}