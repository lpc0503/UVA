#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "136"

#define ULL unsigned long long

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	ULL a[1501];
	a[1] = 1;
	int idx2 = 1;
	int idx3 = 1;
	int idx5 = 1;

	for(int i = 2 ; i <= 1501 ; i++){

		while(a[idx2]*2 <= a[i-1])
			idx2++;
		while(a[idx3]*3 <= a[i-1])
			idx3++;
		while(a[idx5]*5 <= a[i-1])
			idx5++;

		a[i] = min(a[idx2]*2, min(a[idx3]*3, a[idx5]*5));
	}
	printf("The 1500'th ugly number is %llu.\n", a[1500]);

	return 0;
}