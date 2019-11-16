#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10285"

int grid[105][105];
int dp[105][105];
int r, c;
int dir[4][2] = {

	{1, 0},//上
	{-1, 0},//下
	{0, -1},//左
	{0, 1}//右
};

void print(){

	cout << endl;
	for(int i = 1 ; i <= r ; i++){

		for(int j = 1; j <= c ; j++){

			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}
int dfs(int x, int y){

	if(dp[x][y])
		return dp[x][y];
	
	dp[x][y] = 1;

	for(int i = 0 ; i < 4 ; i++){

		int next_x = x+dir[i][0];
		int next_y = y+dir[i][1];
		if(grid[next_x][next_y] < grid[x][y])
			dp[x][y] = max(dfs(next_x, next_y)+1, dp[x][y]);
	}
	return dp[x][y];
}


int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;
	// getchar();
	string name;
	// int r, c;

	while(cases--){

		// getchar();
		cin >> name;
		cout << name << ": ";
		cin >> r >> c;
		memset(grid, 0, sizeof(grid));
		memset(dp, 0, sizeof(dp));

		for(int i = 0 ; i <= c+1 ; i++)
			grid[0][i] = grid[r+1][i] = 100000;
		for(int i = 0 ; i <= r+1 ; i++)
			grid[i][0] = grid[i][c+1] = 100000; 


		for(int i = 1 ; i <= r ; i++)
			for(int j = 1 ; j <= c ; j++)
				cin >> grid[i][j];
		// print();
		int ans = -1;
		for(int i = 1; i <= r ; i++)
			for(int j = 1 ; j <= c ; j++)
				ans = max(dfs(i, j), ans);

		cout << ans << endl;
	}

	return 0;
}