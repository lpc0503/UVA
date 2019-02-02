/********************************************************************************************************************
* Uva 537 - Artificial Intelligence?                                                                 	      	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=96&page=show_problem&problem=478   *
* https://www.udebug.com/UVa/537                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

double getNum(string str, int i){

	if(str[i] == '-')
		i++;

	double tmp = 0;
	while(isdigit(str[i])){

		tmp *= 10;
		tmp += (str[i] - '0');
		i++;
	}
	if(str[i] == '.'){

		i++;
		int k = 10;
		while(isdigit(str[i])){

			tmp += ((double)(str[i] - '0') / k);
			k *= 10;
			i++;
		}
	}

	if(str[i] == 'm')
		tmp /= 1000;
	else if(str[i] == 'k')
		tmp *= 1000;
	else if(str[i] == 'M')
		tmp *= 1000000;

	return tmp;
}

int main(void){

	#ifdef DBG
	freopen("537.in", "r", stdin);
	freopen("537.out", "w", stdout);
	#endif

	int cases;
	scanf("%d", &cases);
	getchar();

	for(int testcases = 1 ; testcases <= cases ; testcases++){

		string str;

		getline(cin, str);
		//printf("%c\n", str[0]);
		double P = 0, U = 0, I = 0;

		for(int i = 0 ; i < str.size() ; i++){

			if(str[i] == 'I' && str[i+1] == '=')
				I = getNum(str, i+2);
			if(str[i] == 'P' && str[i+1] == '=')
				P = getNum(str, i+2);
			if(str[i] == 'U' && str[i+1] == '=')
				U = getNum(str, i+2);
		}

		printf("Problem #%d\n", testcases);

		if(I && P)
			printf("U=%.2fV\n", P/I);
		else if(I && U)
			printf("P=%.2fW\n", I*U);
		else
			printf("I=%.2fA\n", P/U);

		putchar('\n');
	}

	return 0;
}