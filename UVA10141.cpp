/*******************************************************************************************************
* UVa 10141 - Request for Proposal                                                                     *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1082 *
* https://www.udebug.com/UVa/10141                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

struct company{
	
	char name[10001];
	double d;
	int r;
};

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int N, P;
	int count = 1;
	char trash[81];
	bool flag = false;

	while(scanf("%d%d", &N, &P)){

		if(N == 0  && P == 0)
			break;
		if(flag){

			printf("\n");
		}

		do{
			cin.getline(trash, 81);
		}while(N--);

		char garbage[81];
		
		company company_in;
		company best;

		best.r = 0;
		best.d = 1000000;

		while(P--){

			cin.getline(company_in.name, 10001);
			cin >> company_in.d >> company_in.r;
			
			int tmp = company_in.r;

			do{
				cin.getline(garbage, 81);
			}while(tmp--);

			if(company_in.r > best.r)
				best = company_in;
			else if(company_in.r == best.r && company_in.d < best.d)
				best = company_in;
		}
		printf("RFP #%d\n%s\n", count, best.name);
		count++;
		flag = true;
	}
	return 0;
}