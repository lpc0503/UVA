/*******************************************************************************************************
* Uva 12908 - The book thief                                                                           *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4773 *
* https://www.udebug.com/UVa/12908                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

vector<long long int> table;

void build(){

	int tmp = 0;
	for(int i = 1 ; i <= 15001 ; i++){

		tmp = tmp + i;
		table.push_back(tmp);
	}
}

long long search(long long s){

	int left = 0, right = table.size() - 1, mid = (right+left)/2;
	while(left <= right){

		if(table[mid] == s)
			return mid+1;

		if(table[mid] > s){

			right = mid - 1;
			mid = (right+left)/2;
		}
		else{

			left = mid + 1;
			mid = (left+right)/2;
		}
	}
	return left;
}

int main(void){

	#ifdef DBG
	freopen("12908.in", "r", stdin);
	freopen("12908.out", "w", stdout);
	#endif

	build();
	long long int s;
	
	while(scanf("%lld", &s) != EOF){

		if(s == 0)
			return 0;

		int index = search(s);

		printf("%d %d\n", table[index]-s, index+1);
	}
	
	return 0;
}