#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "12289"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;
	string str;
	string one = "one";

	while(cases--){

		cin >> str;
		if(str.size() != 5){
			int count = 0;
			for(int i = 0 ; i < str.size() ; i++){

				if(str[i] == one[i])
					count++;
			}
			if(count >= 2)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
		else
			cout << 3 << endl;
	}

	return 0;
}