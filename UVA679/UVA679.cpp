/*******************************************************************************************************
* UVa 679: Dropping Balls                                                                              *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=620               *
* https://www.udebug.com/UVa/679                                                                       *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int ans;	

void drop(int depth, int ball){

	ans = 1;
	for(int i = 1 ; i < depth ; i++){

		if(ball % 2 == 1){

			ans = ans * 2;
			ball = ball / 2 + 1;
		}
		else{

			ans = ans * 2 + 1;
			ball = ball / 2;
		}
	}
}

void print(int i){

	printf("%d\n", i);
}

/*int parent(int index){

	return index / 2;
}

void left(int index){

	tree_bl[index * 2] = true;
}

void right(int index){

	tree_bl[index * 2 - 1] = false;
}*/

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int N, depth, ball;
	scanf("%d", &N);

	while(N--){

		scanf("%d %d", &depth, &ball);

		drop(depth, ball);
		print(ans);
	}

	return 0;
}