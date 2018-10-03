/*******************************************************************************************************
* UVa 10300 - Ecological Premium                                                                       *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241 *
* https://www.udebug.com/UVa/10300                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int N;

	cin >> N;
	while(N--){

		int farmer;
		long long int tmp = 0;
		long long int area, number, level;

		cin >> farmer;
		while(farmer--){

			cin >> area >> number >> level;
			if(number == 0)
				continue;
			tmp = tmp + area*level;
		}
		printf("%lld\n", tmp);
	}
	return 0;
}