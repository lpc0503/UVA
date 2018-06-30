#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int number;
	int count = 0;

	while(scanf("%d", &number)){

		if(number == 0)
			break;
		else{

			int arr[number];
			int sum = 0, average = 0;

			for(int i = 0 ; i < number ; i++){

				scanf("%d", &arr[i]);
				sum = sum + arr[i];
			}

			average = sum / number;

			int ans = 0;

			for(int i = 0 ; i < number ; i++){

				if(arr[i] < average)
					ans = ans + (average - arr[i]);
			}

			printf("Set #%d\n", ++count);
			printf("The minimum number of moves is %d.\n", ans);
		}
		printf("\n");
	}

	return 0;
}