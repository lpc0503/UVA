#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10739"

int ans[1010][1010];
string str;

int min3(int x, int y, int z){

	return min(min(x, y), z);
}

void print(){

	for(int i = 0 ; i < str.size() ; i++){

		for(int j = 0 ; j < str.size() ; j++){

			cout << ans[i][j] << ' ';
		}
		putchar('\n');
	}
	putchar('\n');
}


int dp(int i, int j){

	cout << "i: " << i << endl;
	cout << "j: " << j << endl;

	if (ans[i][j] == 0){

		if(i>j){

			cout << "i>j" << endl;
			print();

			cout << "==========" << endl;
			return 0;
		}

		if(str[i] == str[j]){

			//if equal
			//ignore
			cout << "equal" << endl;
			cout << "equal i: " << str[i] << endl;
			cout << "equal j: " << str[j] << endl;
			ans[i][j] = dp(i+1, j-1);

			print();
		}
		else{

			// case 1: del str[i] or add str[i] to str[j]
				// dp(i, j-1)
			// case 2: del str[j] or add str[j] to str[i]
				// dp(i+1, j)
			// case 3: replace(str[i], str[j])
				// sp(i+1, j-1)

			cout << "not equal" << endl;
			cout << "ne i: " << str[i] << endl;
			cout << "ne j: " << str[j] << endl;
			ans[i][j] = min3(dp(i, j-1), dp(i+1, j), dp(i+1, j-1))+1;
			
			cout << "ne" << endl;
			print();
		}
		
	}

	cout << "==========" << endl;
	return ans[i][j];

}

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;

	cin >> cases;
	int k = 0;

	while(cases--){

		memset(ans, 0, sizeof(ans));
		cin >> str;
		print();
		cout << "--------------" << endl;

		cout << "Case "  << ++k << ": " << dp(0, str.size()-1) << endl;
	}



	return 0;
}