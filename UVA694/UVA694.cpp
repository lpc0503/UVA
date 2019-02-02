/********************************************************************************************************************
* Uva 694 - The Collatz Sequence                                                                 	        	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=94&page=show_problem&problem=635   *
* https://www.udebug.com/UVa/694                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

static const int STEP2 = 0;
static const int STEP3 = 1;
static const int STEP4 = 2;

int main(void){

	#ifdef DBG
	freopen("694.in", "r", stdin);
	freopen("694.out", "w", stdout);
	#endif

	long long A, limit;
	int cases = 1;
	long long tmp;

	while(scanf("%lld %lld", &A, &limit)){

		if(A < 0 && limit < 0)
			break;
		tmp = A;
		int step = -1;
		int ans = 1;
		bool leave = false;

		while(1){

			if(A == 1)
				step = STEP2;
			else if(A % 2 == 0)
				step = STEP3;
			else
				step = STEP4;

			if(A > limit){

				ans--;
				step = STEP2;
			}

			switch(step){

				case STEP2:
					leave = true;
				break;

				case STEP3:
					A = A / 2;
					ans++;
				break;

				case STEP4:
					A = 3*A + 1;
					ans++;
				break;
			}
			//printf("%d\n", A);
			if(leave)
				break;
		}

		printf("Case %d: A = %lld, limit = %d, number of terms = %d\n", cases++, tmp, limit, ans);
	}
	return 0;
}