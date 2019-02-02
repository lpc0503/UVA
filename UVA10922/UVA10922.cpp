#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10922"

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	string str;
	while(getline(cin, str)){

		if(str[0] == '0')	
			break;

		int num = 0;
		int count = 0;
		for(int i = 0 ; i < str.size() ; i++){

			num += (str[i] - '0');
		}

		if(num%9 != 0){

			cout << str << " is not a multiple of 9." << endl;
			continue;
		}
		else{

			count = 1;
			while(num % 9 == 0){

				if(num == 9)
					break;
				int tmp = 0;
				while(num > 0){

					tmp += (num %10);
					num /= 10;
				}
				num = tmp;
				count++;
			}
			cout << str << " is a multiple of 9 and has 9-degree " << count <<  "." << endl;
		}
	}
	
	return 0;
}