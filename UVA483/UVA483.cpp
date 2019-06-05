#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "483"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	string str;

	while(getline(cin, str)){

		int index;
		int count = 0;
		string tmp;
		for(int i = 0 ; i < str.size() ; i++){

			if(str[i] == ' '){
				
				count = 0;
				cout << ' ';
			}
			else if(str[i] != ' ' && (str[i+1] == ' ' || i+1 == str.size())){

				index = i;
				count++;
				tmp = str.substr(index-count+1, count);
				reverse(tmp.begin(), tmp.end());
				cout << tmp;
				count = 0;
			}
			else{

				index = i;
				count++;
			}
		}
		putchar('\n');
	}
	return 0;
}