/*******************************************************************************************************
* UVa 10209 - Is This doubleegration ?                                                                    *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1150              *
* https://www.udebug.com/UVa/10209                                                                     *
*******************************************************************************************************/
#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include<cstdio>

using namespace std;

int main(void){

	#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	double side;
	double tmp = sqrt(3)/4;

	while(cin >> side){

		double half_oval = (side*side*M_PI)/6 - side*side*tmp;
		double sickle = (side*side*M_PI)/4 - side*side*tmp - 2*half_oval;
		double striped = side*side - 4*sickle;
		double dotted = (((side*side*M_PI)/4 - side*side/2)*2 - striped)*2;
		double rest = (sickle - dotted/4)*4;

		printf("%.3f %.3f %.3f\n", striped, dotted, rest);
	}
	return 0;
}