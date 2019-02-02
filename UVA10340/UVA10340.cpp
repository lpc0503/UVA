/*******************************************************************************************************
* UVa 10340 - All in All                                                                               *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1281 *
* https://www.udebug.com/UVa/10340                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	//char str_a[10005], str_b[10005];
	string str_a, str_b;

	while(cin >> str_a >> str_b){

		int j = 0;
		int count = 0;
		for(int i = 0 ; i < str_b.length() ; i++){

			if(str_a[j] == str_b[i]){

				j++;
			}
			if(j == str_a.length()){

				break;
			}
		}
	    if(j == str_a.length()){

	    	cout << "Yes" << endl;
	    }
	    else{

	    	cout << "No" << endl;
	    }
	}
	return 0;
}