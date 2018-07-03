/*******************************************************************************************************
* UVa 579 - Clock Hands                                                                                *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=520  *
* https://www.udebug.com/UVa/579                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int hour, min;
	while(scanf("%d:%d", &hour, &min)){

		if(hour == 0 && min == 0)
			return 0;
		
		double tmp = min;		
		double hour_move = tmp/2;	
		hour = hour*5;
		double degree;
		if((hour*6 + hour_move) >= (min*6))
			degree = (hour*6 + hour_move) - (min*6);
		else
			degree = (min*6) - (hour*6 + hour_move);

		if(degree >= 180)	
			degree = 360 - degree;
		else if((hour*6+hour_move) == min*6)
			degree = 180;
	

		printf("%.3f\n", degree);
	}
	return 0;
		
}