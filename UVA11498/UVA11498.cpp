#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11498"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n;

	while(cin >> n){

		if(n == 0)
			break;

		int X, Y;
		cin >> X >> Y;
		int a, b;

		while(n--){

			cin >> a >> b;

			if(a == X || b == Y){

				cout << "divisa" << endl;
				continue;
			}

			if(a > X){

				if(b > Y)
					cout << "NE" << endl;
				else
					cout << "SE" << endl;			
			}
			else{

				if(b > Y)
					cout << "NO" << endl;
				else
					cout << "SO" << endl;
			}
		}
	}
	return 0;
}