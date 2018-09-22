/*******************************************************************************************************
* UVa 11235 - Frequent values                                                                          *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2176              *
* https://www.udebug.com/UVa/11235                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

//using namespace std;

int indexx[400000];
int count[400000];
int type[400000];
int left[400000];
int right[400000];
int ct = 1, idx = 1;
int n, q;

void input(){

		for(int i = 1 ; i <= n ; i++){

			scanf("%d", &indexx[i]);// input sequence
			if(i == 1)// determine the count array
				continue;
			else{

				if(indexx[i] == indexx[i-1])
					ct++;
				else{

					count[idx++] = ct;
					ct = 1;
				}
				if(i == n)
					count[idx] = ct;
			}
		}
}

void tp(){

	int k = 1;
	for(int i = 1 ; i < n ; i++){

		if(indexx[i] == indexx[i+1])
			type[i] = k;
		else{

			type[i] = k;
			k++;
		}
		if(i == n - 1)
			type[i+1] = k;
	}
}

void left_b(){

	int tmp;
	left[1] = tmp = 1;
	for(int i = 2 ; i <= n ; i++){

		if(type[i] == type[i-1])
			left[i] = tmp;
		else{

			left[i] = tmp = i;
		}
	}
}

void right_b(){

	int tmp;
	right[n] = tmp = n;
	for(int i = n - 1 ; i > 0 ; i--){

		if(type[i] == type[i+1])
			right[i] = tmp;
		else{

			right[i] = tmp = i;
		} 
	}
}

int main(void){

	#ifdef DBG
	freopen("11235.in", "r", stdin);
	freopen("11235.out", "w", stdout);
	#endif

	while(~scanf("%d %d", &n, &q)){

		if(!n)
			break;

		ct = 1;
		idx = 1;

		input();
		
		tp();

		left_b();

		right_b();

		int l, r, ans;

		while(q--){

			scanf("%d %d", &l, &r);
			int l_c = type[l] + 1, r_c = type[r] - 1;
			int test = 0;

			if(type[l] == type[r]){

				ans = r - l + 1;
				test++;
			}
			else{

				int tmp = -1;
				for(int i = l_c ; i <= r_c ; i++){

					tmp = std::max(tmp, count[i]);
				}

				ans = std::max(right[l] - l + 1, r - left[r] + 1);
				ans = std::max(ans, tmp);
			}
			printf("%d\n", ans);
		}
	}
	



	return 0;
}