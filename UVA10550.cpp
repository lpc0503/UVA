/*******************************************************************************************************
* UVa 10550 - Combination Lock                                                                         *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1491              *
* https://www.udebug.com/UVa/10550                                                                     *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int n, count = 0;
	int arr[3];

	while(cin >> n){

		if(n == 0)
			count++;

		for(int i = 0 ; i < 3 ; i++){

			cin >> arr[i];
			if(arr[i] == 0)
				count++;
		}
		if(count == 4)
			break;

		int sum = 1080;

		if(n > arr[0])
			sum = sum + (n - arr[0])*9;
		else if(n < arr[0])
			sum = sum + (360 - 9*(arr[0] - n));

		if(arr[0] > arr[1])
			sum = sum + (360 - 9*(arr[0] - arr[1]));
		else if(arr[0] < arr[1])
			sum = sum + (arr[1]- arr[0])*9;

		if(arr[1] > arr[2])
			sum = sum + (arr[1] - arr[2])*9;
		else if(arr[2] > arr[1])
			sum = sum + (360 - 9*(arr[2] - arr[1]));
		
		cout << sum << endl;
		count = 0;		
	}
	return 0;
}