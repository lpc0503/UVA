/********************************************************************************************************************
* UVa 13178 - Is it multiple of 3?                                                                                  *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=5089  *
* https://www.udebug.com/UVa/13178                                                                                  *
********************************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int cases;

	cin >> cases;

	while(cases--){

		unsigned long long int n;

		cin >> n;
		
/*		unsigned long long int s = 0;
		for(int i = 1 ; i <= n ; i++){

			s = s + i;
		}*/

		if((n-1) % 3 == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}


	return 0;
}