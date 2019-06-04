#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "10696"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int n;
	while(cin >> n && n){

		if(n > 100)
			cout << "f91(" << n << ") = " << n-10 << endl;
		else
			cout << "f91(" << n << ") = " << 91 << endl;
	}
	return 0;
}