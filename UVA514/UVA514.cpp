#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "514"

int main(){
	
	#ifdef DBG
	freopen("UVA" PROBLEM ".in", "r", stdin);
	freopen("UVA" PROBLEM ".out", "w", stdout);
	#endif

	int num_of_train;

	while(cin >> num_of_train) {

	    if(num_of_train == 0)
	        break;

	    int temp;
        while(cin >> temp) {

            if(temp == 0)
                break;

            int train_out[num_of_train];
            train_out[0] = temp;
            for(int i = 1 ; i < num_of_train ; i++)
                cin >> train_out[i];

            stack<int> train_in;

            int in = 1, out = 0;
            while(out < num_of_train) {

                if(!train_in.empty() && train_in.top() == train_out[out]) {

                    train_in.pop();
                    out++;
                }
                else if(train_out[out] != in){

                    train_in.push(in);
                    if(++in > num_of_train) break;
                }
                else {

                    out++;
                    in++;
                }
            }

            cout << (out >= num_of_train ? "Yes" : "No") << endl;
        }
        cout << endl;
    }
	return 0;
}