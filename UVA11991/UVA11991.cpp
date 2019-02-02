#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

#define SIZE 1000001
vector<int> vec[SIZE];

int main(void){


	int n_size;
	int m_columns;
	int num_v, occur_k; 

	while(scanf("%d", &n_size) != EOF){

		scanf("%d", &m_columns);

		for(int i = 0 ; i <= SIZE ; i++)
			vec[i].clear();

		for(int i = 1 ; i <= n_size ; i++){

			scanf("%d", &num_v);
			vec[num_v].push_back(i);

		}
		while(m_columns--){

			scanf("%d%d", &occur_k, &num_v);

			if(vec[num_v].size() < occur_k)
				printf("0\n");
			else
				printf("%d\n", vec[num_v][occur_k - 1]);
		}

	}
	return 0;
}