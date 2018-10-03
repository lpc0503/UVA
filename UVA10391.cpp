/*******************************************************************************************************
* 10391 - Compound Words                                                                               *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1332 *
* https://www.udebug.com/UVa/10391                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

#define N 120000
#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)

string str[N+10];
int head[N+10];
int top, str_index;

struct list{

	int str_index;
	int next;
}arr[N+10];

unsigned int BKDRHash(const char str[]){

	unsigned int seed = 131;
	unsigned int hash = 0;

	int len = strlen(str);

	for(int i = 0 ; i < len ; i++)
		hash = hash * seed + str[i];

	return (hash & 0xfffffff) % N;
}

void add(unsigned int head_index, int str_index){

	arr[top].str_index = str_index;
	arr[top].next = head[head_index];
	head[head_index] = top++;
}

bool find(string str_in){

	unsigned int index = BKDRHash(str_in.c_str());
	for(int i = head[index] ; i != -1 ; i = arr[i].next){

		int zzzzzz = arr[i].str_index;
		if(!strcmp(str[zzzzzz].c_str(), str_in.c_str())){

			return 1;
		}
	}
	return 0;
}

int main(void){

	#ifdef DBG
	freopen("10391.in", "r", stdin);
	freopen("10391.out", "w", stdout);
	#endif

	str_index = top = 0;
	memset(head, -1, sizeof(head));

	while(cin >> str[str_index]){

		unsigned int head_index = BKDRHash(str[str_index	].c_str());
		add(head_index, str_index);
		str_index++;
	}

	for(int i = 0 ; i < str_index ; i++){

		for(int j = 1 ; j < str[i].length() ; j++){

			string sub1 = str[i].substr(0, j);
			string sub2 = str[i].substr(j, str[i].length() - j);
			if(find(sub1) && find(sub2)){

				cout << str[i] << endl;
				break;
			}
		}
	}
	return 0;
}