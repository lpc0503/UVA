/********************************************************************************************************************
* Uva 12694 - Meeting Room Arrangement                                                                              *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=602&page=show_problem&problem=4432 *
* https://www.udebug.com/UVa/12694                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("12694.in", "r", stdin);
	freopen("12694.out", "w", stdout);
	#endif

	int cases;
	int start, endtime;

	scanf("%d", &cases);

	while(cases--){

		vector< pair<int, int> > schedule;
		while(scanf("%d %d", &start, &endtime) && start + endtime){

			schedule.push_back(make_pair(endtime, start));//store end at schedule[i].first
													  //store start at schedule[i].second	
		}

		sort(schedule.begin(), schedule.end());//sort the table by the value of end
		
		int count = 0;
		int pre_endtime = 0;//pre end time

		for(int i = 0 ; i < schedule.size() ; i++){

			if(pre_endtime <= schedule[i].second/*start time(now)*/){

				pre_endtime = schedule[i].first;//end time(now) become pre end time
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}