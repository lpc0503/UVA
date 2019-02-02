/*******************************************************************************************************
* UVa 11689 - Soda Surpler                                                                             *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2736 *
* https://www.udebug.com/UVa/11689                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int times;

	cin >> times;

	while(times--){

		int e, f, c;

		cin >> e >> f >> c;

		int sum = e + f;

		int count = 0 ,tmp = 0;
		while(sum + tmp >= c){

			sum = sum + tmp;
			tmp = sum % c;
			sum = sum / c;
			count = count + sum;;
		}
		cout << count << endl;
	}
	return 0;
}