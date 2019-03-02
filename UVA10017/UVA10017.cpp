#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10017"

bool V[4][251];
int steps;
int n, m;
bool stepReach = false;

void print(){

	if(steps > m){

		stepReach = true;
		return;
	}
	for(int i = 1 ; i <= 3 ; i++){

		printf("%c=>", 'A'+i-1);
		bool flag = false;
		for(int j = n ; j >= 1 ; j--){

			if(V[i][j]){

				if(!flag){

					printf("  ");
					flag = true;
				}
				printf(" %d", j);
			}
		}
		putchar('\n');
	}
	putchar('\n');
	++steps;
}

void move(int n , int A, int B, int C){

	V[A][n] = false;
	V[C][n] = true;
	print();
}

void hanoi(int n, int A, int B, int C){

	if(stepReach)
		return;
	if(n == 1)
		move(n, A, B, C);
	else{

		hanoi(n-1, A, C, B);
		move(n, A, B, C);
		hanoi(n-1, B, A, C);
	}
}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases = 1;

	while(scanf("%d %d", &n, &m) != EOF){

		if(n == 0 && m == 0)
			break;

		printf("Problem #%d\n\n", cases++);
		memset(V, false , sizeof(V));
		stepReach = false;
		steps = 0;

		for(int i = n ; i >= 1 ; --i)
			V[1][i] = true;

		print();

		hanoi(n, 1, 2, 3);

	}


	return 0;
}	