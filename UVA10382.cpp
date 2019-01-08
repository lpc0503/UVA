/*******************************************************************************************************
* UVa 10382 - Watering Grass                                                                           *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1323 *
* https://www.udebug.com/UVa/10382                                                                     *
*******************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("10382.in", "r", stdin);
	freopen("10382.out", "w", stdout);
	#endif

	int numOfSpr;
	double len, wei;
	vector <pair<double ,double> > v;

	while(scanf("%d %lf %lf", &numOfSpr, &len, &wei) != EOF){

		double dis, x, r;
		for(int i = 0 ; i < numOfSpr ; i++){

			scanf("%lf %lf", &x, &r);

			if(r > wei/2){

				dis = sqrt(r*r - (wei*wei)/4);
				v.emplace_back(x-dis, x+dis);
			}
		}
		
		sort(v.begin(), v.end());

		// #ifdef DBG
		// for(int i = 0 ; i < v.size() ; i++)
		// 	printf("%lf %lf\n", v[i].first, v[i].second);
		// #endif

		double left = 0;
		double right = 0;
		int count = 0;
		for(int i = 0 ; i < v.size() ; i++){

			int j = i;
			while(v[j].first <= left && j < v.size()){

				if(v[j].second > right)
					right = v[j].second;
				j++;
			}
			count++;

			if(right >= len)
				break;
			if(right < left){

				count = -1;
				break;
			}
			left = right;
		}
		if(right < len)
			count = -1;

		printf("%d\n", count);

		v.clear();
	}
	return 0;
		
}