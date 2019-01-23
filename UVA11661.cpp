#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11661"

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	string str;
	int n;

	while(scanf("%d", &n) && n){

		cin >> str;
		getchar();

		int Rpos = 0;
		int Dpos = 0;
		int tmp  = 0;
		bool Rflag = false;
		bool Dflag = false;

		int dis = 100010;
		for(int i = 0 ; i < str.size() ; i++){

			if(str[i] == 'Z'){

				dis = 0;
				break;
			}
			else if(str[i] == 'R'){

				Rpos = i;
				Rflag = true;
			}
			else if(str[i] == 'D'){

				Dpos = i;
				Dflag = true;
			}

			if(Rflag && Dflag){

				if(str[i] != '.'){
					
					tmp = abs(Rpos - Dpos);
					dis = min(tmp, dis);
				}
			}
		}
		printf("%d\n", dis);
	}
	return 0;
}