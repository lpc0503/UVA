#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

bool isalldigit(string str);

int main(int argc, char const *argv[]){
	
	string s;
	while(getline(cin, s)){

		int integer;
		istringstream ss(s);
		while(ss){
			
			string word;
			ss >> word;
			if(isalldigit(word))
				integer = integer + atoi(word.c_str());
		}
		cout << integer << endl;
	}

	system("pause");
	return 0;
}

bool isalldigit(string str){
	
	for(int i = 0 ; i < str.length() ; i++){
		
		if(!isdigit(str[i]))
			return false;
	}
	return true;
}
