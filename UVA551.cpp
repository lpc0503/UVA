/********************************************************************************************************************
* Uva 551 - Nesting a Bunch of Brackets                                                                 	   	    *
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=492    *
* https://www.udebug.com/UVa/551                                                                                    *
********************************************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main(void){

	#ifdef DBG
	freopen("551.in", "r", stdin);
	freopen("551.out", "w", stdout);
	#endif

	string str;

	while(getline(cin, str)){

		stack<char> st;
		int count = 0;
		int numOfstar = 0;

		for(int i = 0 ; i < str.size() ; i++){

			count++;
			if(str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<'){

				if(str[i] == '(' && str[i+1] == '*'){

					st.push('*');
					i++;
					numOfstar++;
				}
				else
					st.push(str[i]);
			}
			else if(str[i] == ')' || str[i] == ']' || str[i] == '}' || str[i] == '>' || (str[i] == '*' && str[i+1] == ')')){

				if(st.empty())
					break;
				if(str[i] == '*'){

					if(st.top() != '*')
						break;
					st.pop();
					i++;
					numOfstar++;
				}
				else if(str[i] == ')'){

					if(st.top() != '(')
						break;
					st.pop();
				}
				else if(str[i] == ']'){

					if(st.top() != '[')
						break;
					st.pop();
				}
				else if(str[i] == '}'){

					if(st.top() != '{')
						break;
					st.pop();
				}
				else if(str[i] == '>'){

					if(st.top() != '<')
						break;
					st.pop();
				}
			}
		}
		cout << str.size() << endl;
		cout << count << endl;
		if(st.empty())
			cout << st.top() << endl;
		if(st.empty() && count == 1){
			printf("NO 1\n");
		}
		else if(!st.empty() || count < str.size()){

			if(numOfstar > 0 && count == str.size()-numOfstar && !str.empty())
				count++;
			// else if(st.top() == str.size())
			printf("NO %d\n", count);
		}
		else
			printf("YES\n");
	}
	return 0;
}