/*******************************************************************************************************
* UVa 10499 - The Land of Justice                                                                      *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1440 *
* https://www.udebug.com/UVa/10499                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	long long int num;

	while(cin >> num){

		if(num < 0){

			break;
		}

	    if(num == 1){

			cout << "0%" << endl;
		}
		else{

			cout << num*25 << "%" << endl;
		}
	}
	return 0;
}