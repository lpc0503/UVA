/*******************************************************************************************************
* UVa 488 - Triangle Wave                                                                              *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=429  *
* https://www.udebug.com/UVa/488                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int flag = 1;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int times;
	cin >> times;

	while(times--){

		int amplitude, frequency;

		cin >> amplitude >> frequency;

		while(frequency--){


			if(flag == 1){

				for(int i = 1 ; i <= amplitude ; i++){

					for(int j = 0 ; j < i ; j++){

						cout << i;
					}
					cout << endl;
				}
				for(int i = amplitude-1 ; i >= 1 ; i--){

					for(int j = 0 ; j < i ; j++){

						cout << i;
					}
					cout << endl;
				}
				flag = 0;
			}

			else{
				
				cout << endl;
				for(int i = 1 ; i <= amplitude ; i++){

					for(int j = 0 ; j < i ; j++){

						cout << i;
					}
					cout << endl;
				}
				for(int i = amplitude-1 ; i >= 1 ; i--){

					for(int j = 0 ; j < i ; j++){

						cout << i;
					}
					cout << endl;
				}
			}
		}
	}
	return 0;
}