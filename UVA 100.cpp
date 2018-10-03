/*******************************************************************************************************
* UVa 100 - The 3n + 1 problem                                                                         *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36   *
* https://www.udebug.com/UVa/100                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int i, j;
	
	while(scanf("%d%d", &i, &j) != EOF){
		
		printf("%d %d ", i, j);
		
		if(i < j){
			swap(i, j);
		
		int count = 0;//count the length
		int temp = 0;//store the number
		int tmp = 0;//store the length

		for(int k = i ; k >= j ; k--){
		
			temp = k;
			
			while(1){
				
				count++;
			if(temp == 1)
				break;
			else if(temp % 2 == 0)
				temp = temp / 2;
			else
				temp = 3*temp + 1;		
			}
			
			if(count > tmp) 
				tmp = count;
			count = 0;
		}
	
	printf("%d\n", tmp);
	}
	
	return 0;	
}