#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "673"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int cases;
	stack<char> st;
	bool flag = true;

	cin >> cases;

	getchar();
	while(cases--){

		flag = true;
		string str;
		getline(cin, str);

		for(int i = 0 ; i < str.size() ; ++i){
			
			if(str[i] == ')'){

				if(st.empty()){
					
					flag = false;
					break;
				}

				if(st.top() != '('){

					flag = false;
					break;
				}
				st.pop();
			}
			else if(str[i] == ']'){

				if(st.empty()){
					
					flag = false;
					break;
				}

				if(st.top() != '['){

					flag = false;
					break;
				}
				st.pop();
			}
			else
				st.push(str[i]);
		}

		if(!st.empty())
			flag = false;

		if(flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

		while(!st.empty())
			st.pop();
 		
	}

	return 0;
}