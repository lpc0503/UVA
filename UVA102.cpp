/********************************************************************************************************************
* Uva 102 - Ecological Bin Packing                                                                           	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=38    *
* https://www.udebug.com/UVa/102                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int b[4];
int g[4];
int c[4];
int i = 0;

int main(void){

	#ifdef DBG
	freopen("102.in", "r", stdin);
	freopen("102.out", "w", stdout);
	#endif

	while(scanf("%d", &b[1]) != EOF){

		scanf("%d%d%d%d%d%d%d%d", &g[1], &c[1], &b[2], &g[2], &c[2], &b[3], &g[3], &c[3]);

		int tmp = 0;
		int ans = 0;
		char str[4];


		//bcg
		tmp = b[2] + b[3] + c[1] + c[3] + g[1] + g[2];
		ans = tmp;
		i++;
		strcpy(str, "BCG");

		//bgc
		tmp = b[2] + b[3] + g[1] + g[3] + c[1] + c[2];
		if(tmp < ans){

			ans = tmp;
			i++;
			strcpy(str, "BGC");
		}

		//cbg
		tmp = c[2] + c[3] + b[1] + b[3] + g[1] + g[2];
		if(tmp < ans){

			ans = tmp;
			i++;
			strcpy(str, "CBG");
		}

		//cgb
		tmp = c[2] + c[3] + g[1] + g[3] + b[1] + b[2];
		if(tmp < ans){

			ans = tmp;
			i++;
			strcpy(str, "CGB");
		}

		//gbc
		tmp = g[2] + g[3] + b[1] + b[3] + c[1] + c[2];
		if(tmp < ans){

			ans = tmp;
			i++;
			strcpy(str, "GBC");
		}

		//gcb
		tmp = g[2] + g[3] + c[1] + c[3] + b[1] + b[2];
		if(tmp < ans){

			ans = tmp;
			i++;
			strcpy(str, "GCB");
		}

		printf("%s %d\n", str, ans);
	}


	return 0;
}