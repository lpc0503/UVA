#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11332"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	string str;

	while(cin >> str){

		if(str == "0")
			break;

		while(str.size() != 1){

			int sum = 0;
			for(int i = 0 ; i < str.size() ; i++){

				sum += (str[i]-'0');
			}
			str = to_string(sum);
		}

		cout << str << endl;
	}

	return 0;
}