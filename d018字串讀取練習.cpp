#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
using namespace std;

int main(void){
	
	string input;
	while(getline(cin, input)){
		
		istringstream read(input);
		string word;
		float sum = 0;
		while(read >> word){
			
			//cout << word << endl;
			string left, right;
			istringstream parse(word);
			getline(parse, left, ':');
			getline(parse, right, ':');
			//cout << left << " " << right << endl;
		
			if(atoi(left.c_str())%2!=0)
				sum = sum + atof(right.c_str());
			else
				sum = sum - atof(right.c_str());
		}
	cout << sum << endl;
	}
	system("pause");
	return 0;
}
