#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "1312"

int cases;
int y[105];
int n;
int width;
int height;

struct point{

	int x;
	int y;
}a[105];

bool cmp(point a, point b){

	return a.x < b.x || (a.x == b.x && a.y < b.y);
}

void solve(){

	sort(a, a+n, cmp);
	sort(y, y+n+2);

	int len = unique(y, y+n+2)-y;
	int ansX;//X_CO
	int ansY;//Y_CO
	int ans = -1;//len of edge

	int tmpH;
	int tmpW;
	for(int i = 0 ; i < len ; i++){

		for(int j = i+1 ; j < len ; j++){

			tmpH = y[j] - y[i];
			int cur_X = 0;
			for(int k = 0 ; k < n ; k++){

				if(a[k].y <= y[i] || a[k].y >= y[j])
					continue;
				tmpW = a[k].x - cur_X;
				tmpW = min(tmpW, tmpH);
				if(ans < tmpW){

					ansX = cur_X;
					ansY = y[i];
					ans  = tmpW;
				}
				cur_X = a[k].x;
			}
			tmpW = width - cur_X;
			tmpW = min(tmpW, tmpH);
			if(ans < tmpW){

				ansX = cur_X;
				ansY = y[i];
				ans  = tmpW;
			}
		}
	}
	printf("%d %d %d\n", ansX, ansY, ans);
	if(cases)
		putchar('\n');
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	scanf("%d", &cases);
	while(cases--){

		scanf("%d %d %d", &n, &width, &height);

		for(int i = 0 ; i < n ; i++){

			scanf("%d %d", &a[i].x, &a[i].y);
			y[i] = a[i].y;
		}
		y[n] = 0;
		y[n+1] = height;
		solve();
	}
	
	return 0;
		
}