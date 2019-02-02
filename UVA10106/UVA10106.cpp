/********************************************************************************************************************
* Uva 10106 - Product                                                                 	   					   	    *
* https://uva.onlinejudge.org/index.php?Itemid=8&option=com_onlinejudge&page=show_problem&problem=1047			    *
* https://www.udebug.com/UVa/10106                                                                                  *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("10106.in", "r", stdin);
	freopen("10106.out", "w", stdout);
	#endif

	string a, b;

	while(getline(cin, a) && getline(cin, b)){

		if(a == "0" || b == "0"){

			printf("0\n");
			continue;
		}

		int ans[500];
		memset(ans, 0, sizeof(ans));
		int idx = 0;
		int idxtmp = 0;
		int tmp;
		int carry = 0;

		for(int i = a.size()-1 ; i >= 0 ; i--){

			for(int j = b.size()-1 ; j >= 0 ; j--){

				tmp = (a[i] - '0')*(b[j] - '0');
				ans[idx] += tmp % 10 + carry;
				carry = 0;

				if(ans[idx] >= 10){

					carry += ans[idx] / 10;
					ans[idx] = ans[idx] % 10;
				}
				carry += tmp/10;
				idx++; 
			}
			ans[idx] = carry;
			idxtmp++;
			if(i != 0)
				idx = idxtmp;
			carry = 0;
		}
		if(ans[idx] != 0)
			printf("%d", ans[idx]);
		for(int i = idx-1 ; i >= 0 ; i--){

			printf("%d", ans[i]);
		}
		putchar('\n');
	}

	return 0;
}