#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "11547"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	cin >> cases;

	while(cases--){

		long long n;
		cin >> n;
		n *= 567;
		n /= 9;
		n += 7492;
		n *= 235;
		n /= 47;
		n -= 498;
		n /= 10;

		cout << abs(n%10) << endl;
	}

	return 0;
}