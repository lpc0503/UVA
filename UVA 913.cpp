/*******************************************************************************************************
* UVa 913 - Joana and the Odd Numbers                                                                  *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=854  *
* https://www.udebug.com/UVa/913                                                                       *
*******************************************************************************************************/
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	long long int N;	

	while(scanf("%lld", &N) != EOF){

		long long int odd = 0, sum = 1;

		odd = ((1+N)*((N+1)/2))/2;//the number of odd (calculate by formula of Trapezoidal area)
		sum = 3*(2*(odd-1) - 1);/*最後三個數相加 = 倒數第二個數*3
								  從題目可看出 第N個位置*2-1會等於該位置的數字
								  例如:第三個位置*2-1 = 3(位置)*2-1 = 5
								*/
		printf("%lld\n", sum);
	}
	return 0;	
}