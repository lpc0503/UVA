/*******************************************************************************************************
* UVa 122 Trees on the level                                                                           *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=58   *
* https://www.udebug.com/UVa/122                                                                       *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

bool ifpass[1024] = {false};
bool ans = true;
int tree[1024] = {-1};
int address = 1;
int max = 0;

int parent(int index){

	return index / 2;
}

int left(int index){

	return index * 2
}

int right(int index){

	return index * 2 + 1;
}

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	int data;
	char s[100];
	char index[100];

	while(scanf("%s",&s) != EOF){

		address = 1;
		ans = true;
		
		while(1){

			if(s == "()")
				break;

			sscanf(s, "(%d,%s)", &data, &index){


				for(int i = 0 ; i < strlen(index) ; i++){

					if(index[i] == 'L'){

						address = left(address);
						if(address >= max)
							max = address;
					}
					else{

						address = right(address);
						if(address >= max)
							max = address;
					}
				}
				if(tree[address] == -1)
					tree[address] = data;
				else
					ans = false;
			}
		}

	}
	
	return 0;
}